#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void setup(){
    pinMode(12,OUTPUT);
}

void loop(){
    for(int i=0;i<2;++i)
    {
        tone(12,262,250); // write to buzzer
        delay(250);
        tone(12,294,250); // write to buzzer
        delay(250);
        tone(12,330,250); // write to buzzer
        delay(250);
        tone(12,262,250); // write to buzzer
        delay(250);
    }
    for(int i=0;i<2;++i)
    {
        tone(12,330,250); // write to buzzer
        delay(250);
        tone(12,349,250); // write to buzzer
        delay(250);
        tone(12,392,500); // write to buzzer
        delay(500);
    }
    for(int i=0;i<2;++i)
    {
        tone(12,392,125); // write to buzzer
        delay(125);
        tone(12,440,125); // write to buzzer
        delay(125);
        tone(12,392,125); // write to buzzer
        delay(125);
        tone(12,349,125); // write to buzzer
        delay(125);
        tone(12,330,250); // write to buzzer
        delay(250);
        tone(12,262,250); // write to buzzer
        delay(250);
    }
    for(int i=0;i<2;++i)
    {
        tone(12,262,250); // write to buzzer
        delay(250);
        tone(12,196,250); // write to buzzer
        delay(250);
        tone(12,262,500); // write to buzzer
        delay(500);
    }
}
