#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void setup(){
    pinMode(12,OUTPUT);
    pinMode(A0+0,INPUT);
    pinMode(A0+2,INPUT);
    pinMode(A0+5,INPUT);
}

void loop(){
    if(((analogRead(A0+0))==(0))){
        tone(12,196,500); // write to buzzer
        delay(500);
    }
    if(((analogRead(A0+2))==(0))){
        tone(12,262,500); // write to buzzer
        delay(500);
    }
    if(((analogRead(A0+5))==(0))){
        tone(12,294,500); // write to buzzer
        delay(500);
    }
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
}
