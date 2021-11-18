/*
  Blink backlight
  lcd keypad shield testing
  Turns an backlight of LED on for one second, then off for one second, repeatedly.
  xiaolaba, 2020-NOV-10
*/

#include <LiquidCrystal.h>
//LCD pin to Arduino
const int pin_RS = 8; 
const int pin_EN = 9; 
const int pin_d4 = 4; 
const int pin_d5 = 5; 
const int pin_d6 = 6; 
const int pin_d7 = 7; 
LiquidCrystal lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);

const int pin_BL = 10;  // control pin for backlight LED LED+ = 5V, LED- = NPN switch


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin_BL, OUTPUT);
  Serial.begin(115200);
  Serial.println("lcd testing begin");

  lcd.begin(16, 2);
  lcd.print("xiaolaba, line1");
  lcd.setCursor(0,1);
  lcd.print("line2");
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin_BL, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("pin_BL=HIGH, backlight ON");
  delay(2000);                       // wait for a second
  digitalWrite(pin_BL, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("pin_BL=LOW, backlight OFF");
  delay(2000);                       // wait for a second

}
