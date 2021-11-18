/*
  Blink backlight
  lcd keypad shield testing
  Turns an backlight of LED on for one second, then off for one second, repeatedly.
  xiaolaba, 2020-NOV-10
*/

const int pin_BL = 10;  // control pin for backlight LED LED+ = 5V, LED- = NPN switch

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin_BL, OUTPUT);
  Serial.begin(115200);
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
