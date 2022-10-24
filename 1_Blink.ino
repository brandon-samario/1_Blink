/*
  Blink
  Turns an LEDs on for one second, then off for one second, repeatedly
  Use pinMode to set pins as outputs, and use digital write to set state of outputs (LEDs)
  State of LED can either be High having LED on or low having the LED off
*/

// the setup function runs once when you press reset or power the board
void setup() {
pinMode(9, OUTPUT); // setting pin 9 as output (LED 1)
pinMode(10, OUTPUT); // setting pin 10 as output (LED 2)
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)
digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(9, LOW); // turn the LED off by making the voltage LOW
digitalWrite(10, LOW); // turn the LED off by making the voltage LOW
delay(1000); // wait for a second
}
