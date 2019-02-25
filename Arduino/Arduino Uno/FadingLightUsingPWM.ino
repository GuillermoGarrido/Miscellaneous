int LED = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  brightnessUp(1000,5);
  brightnessDown(1000,5);
}

void brightnessUp(unsigned int time, int increment) {
  for (byte x = 0; x < 255; x += increment) {
    analogWrite(LED, x);
    //Serial.print(increment);
    delay(time/(255/5));
  }
}

void brightnessDown(unsigned int time, int decrement) {
  for (byte x = 255; x > 0; x -= decrement) {
    analogWrite(LED,x);
    //Serial.print(decrement);
    delay(time/(255/5));
  }
} 
