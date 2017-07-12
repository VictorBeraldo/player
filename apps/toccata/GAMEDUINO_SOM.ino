#include <SPI.h>
#include <GD.h>
#include "bgm.h"
#include <avr/pgmspace.h>

#define SINE 0



long soundLastTime1 = 0;
long soundNextTime1 = 0;
int soundSize1 = sizeof(voice1)/sizeof(byte);
int soundPointer1 = 0;
bool soundPlay1 = 0;

long soundLastTime2 = 0;
long soundNextTime2 = 0;
int soundSize2 = sizeof(voice2)/sizeof(byte);
int soundPointer2 = 0;
bool soundPlay2 = 0;

bool enableSound = 1;

void startSound(){
      soundPointer1 = 0;
      soundPlay1 = 0;
      soundPointer2 = 0;
      soundPlay2 = 0;
      enableSound = 1; 
}

void stopSound(){
      stopTone(6);
      stopTone(0);
      soundPointer1 = 0;
      soundPlay1 = 0;
      soundPointer2 = 0;
      soundPlay2 = 0;
      enableSound = 0; 
}

void setup() {
  // put your setup code here, to run once:
  GD.begin();
  Serial.begin(9600);
      int x = 0;
  for(int i=0; i<soundSize1; i++) {
      x =voice1[i];
      Serial.println(x);
  }

}

void playTone(int freq, int voice, int amp){
        GD.voice(voice, SINE, freq, amp,amp);
        GD.voice(voice+1, SINE, freq*1.5, amp*0.75,amp*0.75);
        GD.voice(voice+2, SINE, freq*2.0, amp*0.5,amp*0.5);
        GD.voice(voice+3, SINE, freq*2.5, amp*0.16,amp*0.16);
        GD.voice(voice+4, SINE, freq*3.0, amp*0.01,amp*0.01);
        GD.voice(voice+5, SINE, freq*3.5, amp*0.01,amp*0.01);
}

void stopTone(int voice){

       GD.voice(voice, SINE, 0, 0,0);
       GD.voice(voice+1, SINE, 0, 0,0);
       GD.voice(voice+2, SINE, 0, 0,0);
       GD.voice(voice+3, SINE, 0, 0,0);
       GD.voice(voice+4, SINE, 0, 0,0);
       GD.voice(voice+5, SINE, 0, 0,0);
      
}

void loop() {
    //  int tamanho = (sizeof(voice)/sizeof(byte));
      int freq = 0;

      if((millis()- soundLastTime1 >= soundNextTime1)&&enableSound){
            soundLastTime1 = millis();
            if(soundPointer1 < soundSize1) {                 
                  freq = pgm_read_word_near(scaleFrequency+ pgm_read_byte_near(voice1+soundPointer1))*4;
                  if(!soundPlay1){
                        playTone(freq, 0, 50);
                        soundPlay1=1;
                        soundNextTime1 = pgm_read_byte_near(tempo1+soundPointer1)*38;                        
                  }
                  else {
                        stopTone(0);
                        soundNextTime1 =  pgm_read_byte_near(tempo1+soundPointer1)*2;
                        soundPlay1=0;
                        soundPointer1++;                   
                  }
            }

            else {
                  soundPointer1 = 0;
                  soundNextTime1 = 0;
            }
      }

      if((millis()- soundLastTime2 >= soundNextTime2) && enableSound){
            soundLastTime2 = millis();
            if(soundPointer2 < soundSize2) {                 
                  freq = pgm_read_word_near( scaleFrequency + pgm_read_byte_near(voice2+soundPointer2))*4;
                  if(!soundPlay2){
                        playTone(freq, 6,40);
                        soundPlay2=1;
                        soundNextTime2 = pgm_read_byte_near(tempo2+soundPointer2)*38;                        
                  }
                  else {
                        stopTone(6);
                        soundNextTime2 =  pgm_read_byte_near(tempo2+soundPointer2)*2;
                        soundPlay2=0;
                        soundPointer2++;                   
                  }
            }

            else {
                  soundPointer2 = 0;
                  soundNextTime2 = 0;
            }
      }


}
