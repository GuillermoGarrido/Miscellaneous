/*By using an Arduino Uno, you can make a servo motor move in different
directions using your hand and an ultrasonic distance sensor. */

#include <Servo.h>

Servo myServo;
int trigPin = 4;
int echoPin = 2;
long distance;
long duration;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(10);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ultrasonic();
  myServo.write(0);
  if(distance <= 10) {
    myServo.write(90);
  }
  }

void ultrasonic() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.0343/2;
}
