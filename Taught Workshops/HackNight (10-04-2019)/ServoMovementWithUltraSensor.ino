#include <Servo.h>

Servo myServo;
int trigPin = 2;
int echoPin = 4;
long distance;
long duration;
 
void setup() 
{
  myServo.attach(9); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);// put your setup code here, to run once:
}
 
void loop() 
{
  ultrasonic();
  myServo.write(0);
  if(distance <= 5)
  {
    myServo.write(45);
  }
  else if(distance <= 10 && distance > 5) 
  {
    myServo.write(90);
  }
  
}
 
void ultrasonic()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.0343/2;
  Serial.print(distance);
  Serial.print(" cm");
  Serial.println("");
}
