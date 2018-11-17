/**
 * This program outputs "S O S" unto the LED connected 
 * to pin 13 on the Arduino Uno in Morse Code.
 */
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  //Outputs "S" in Morse Code
  for(int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  //Outputs "O" in Morse Code
  for(int j = 0; j < 3; j++) {
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  //Outputs "S" in Morse Code
  for(int k = 0; k < 3; k++) {
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  /*
   1 second delay in between void loops, since the outputs for 
   the two "S" for loops are otherwise difficult to distinguish
   from one another.
   */
  delay(1000);
}
