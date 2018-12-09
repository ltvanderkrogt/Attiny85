/*
DEC2018
L.T. van der Krogt 

MIDI to Tone(); 
https://sshdl-6.extramaster.net/tools/midiToArduino/processFile/ 
*/

int tonePin = 0;    // luidspreker P0 - 220E - loudspreaker - GND 
int ledPin1 = 3;    // LED connected to digital pin 9 // rechtsaf 
int ledPin2 = 2;    // LED connected to digital pin 9 // links af
int ledPin3 = 1;    // LED connected to digital pin 9 //remmen 

void setup()  {
  pinMode(tonePin, OUTPUT);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin1, HIGH);  //red on
  digitalWrite(ledPin2, HIGH);  //red on

  //  analogWrite(ledPin3, 75);   //remlicht
}

void loop()  {


    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 1318, 428.571);
    delay(476.19);
    tone(tonePin, 1318, 428.571);
    delay(476.19);
    tone(tonePin, 1046, 857.142);
    delay(952.38);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 428.571);
    delay(476.19);
    tone(tonePin, 783, 428.571);
    delay(476.19);
    tone(tonePin, 698, 857.142);
    delay(952.38);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 739, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 739, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    delay(238.095);
    tone(tonePin, 880, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 321.42825);
    delay(357.1425);
    tone(tonePin, 739, 107.14275);
    delay(119.0475);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 880, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 739, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 1318, 428.571);
    delay(476.19);
    tone(tonePin, 1318, 428.571);
    delay(476.19);
    tone(tonePin, 1046, 857.142);
    delay(952.38);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 428.571);
    delay(476.19);
    tone(tonePin, 783, 428.571);
    delay(476.19);
    tone(tonePin, 698, 857.142);
    delay(952.38);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 880, 214.2855);
    delay(238.095);
    tone(tonePin, 987, 214.2855);
    delay(238.095);
    tone(tonePin, 880, 214.2855);
    delay(238.095);
    tone(tonePin, 1046, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    delay(714.285);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    tone(tonePin, 698, 214.2855);
    delay(238.095);
    tone(tonePin, 659, 214.2855);
    delay(238.095);
    tone(tonePin, 587, 214.2855);
    delay(238.095);
    tone(tonePin, 880, 214.2855);
    delay(238.095);
    delay(238.095);
    tone(tonePin, 523, 214.2855);
    delay(238.095);
    tone(tonePin, 493, 214.2855);
    delay(238.095);
    tone(tonePin, 783, 214.2855);
    delay(238.095);
    delay(238.095);
    tone(tonePin, 493, 214.2855);
    delay(238.095);
    tone(tonePin, 523, 1285.713);
    delay(1428.57);

  noTone(tonePin);

 // delay(2000);


  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 5 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 50 to 255):
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }

  // fade out from max to min in increments of 5 points:
  //  for (int fadeValue = 255 ; fadeValue >= 5; fadeValue -= 5) {
  //    // sets the value (range from 50 to 255):
  //    analogWrite(ledPin3, fadeValue);
  //    // wait for 30 milliseconds to see the dimming effect
  //    delay(10);
  //  }

  digitalWrite(ledPin1, LOW);  //red on
  delay(500);
  digitalWrite(ledPin1, HIGH);  //red on
  delay(500);

  digitalWrite(ledPin1, LOW);  //red on
  delay(500);
  digitalWrite(ledPin1, HIGH);  //red on
  delay(500);

  digitalWrite(ledPin1, LOW);  //red on
  delay(500);
  digitalWrite(ledPin1, HIGH);  //red on
  delay(500);

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 5; fadeValue -= 5) {
    // sets the value (range from 50 to 255):
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }

  // fade in from min to max in increments of 5 points:
  //  for (int fadeValue = 5 ; fadeValue <= 255; fadeValue += 5) {
  //    // sets the value (range from 50 to 255):
  //    analogWrite(ledPin3, fadeValue);
  //    // wait for 30 milliseconds to see the dimming effect
  //    delay(10);
  //  }

  //    analogWrite(ledPin3, 75);

  digitalWrite(ledPin2, LOW);  //red on
  delay(500);
  digitalWrite(ledPin2, HIGH);  //red on
  delay(500);

  digitalWrite(ledPin2, LOW);  //red on
  delay(500);
  digitalWrite(ledPin2, HIGH);  //red on
  delay(500);

  digitalWrite(ledPin2, LOW);  //red on
  delay(500);
  digitalWrite(ledPin2, HIGH);  //red on
  delay(500);

}




// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
