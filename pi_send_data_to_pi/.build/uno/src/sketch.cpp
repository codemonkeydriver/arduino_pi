#include <Arduino.h>
void setup();
void loop();
void light(int n);
#line 1 "src/sketch.ino"
const int ledPin = 7;

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    while(1) {
        if (Serial.available()) {
   	   Serial.println("==\n");
	   light(Serial.read() - '0');
    	 }
    	 delay(500);
    }
}

void light(int n)
{
    for(int i = 0; i < n; i++) {
       digitalWrite(ledPin, HIGH);
       delay(100);
       digitalWrite(ledPin, LOW);
       delay(100);
    }
}