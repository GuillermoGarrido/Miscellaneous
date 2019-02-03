//Car Traffic Lights
int carRed = 12;
int carYellow = 11;
int carGreen = 10;

int button = 9;

//Pedestrian Crossing Lights
int pedRed = 8;
int pedWhite = 7;

int CrossingTime = 5000;
long changeTime; 

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedWhite, OUTPUT);
  
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(button);

  if (state == HIGH && (millis() - changeTime) > 5000)
  {
    changeLights();
  }
}

void changeLights() {
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);

  digitalWrite(pedRed, LOW);
  digitalWrite(pedWhite, HIGH); 
  delay(CrossingTime);

  for (int i = 0; i < 10; i++)
  {
    digitalWrite(pedWhite, HIGH);
    delay(250);
    digitalWrite(pedWhite, LOW);
    delay(250);
  }

  digitalWrite(pedRed, HIGH);
  delay(500);

  digitalWrite(carRed, LOW);
  delay(1000);
  digitalWrite(carGreen, HIGH);
  changeTime = millis();
}
