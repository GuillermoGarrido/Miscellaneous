 /**
 This program turns on the LED wired to pin 13 on the Arduino Uno for
 2 seconds, turns it off for 5 seconds, then turns it on for 1 second,
 and lastly turns it off for 3 seconds before repeating the loop.
 */

int ledPin = 13;


void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  digitalWrite(ledPin, HIGH);
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(5000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(3000);
}
