int button = 2;
int buttonState;
int previousButtonState = LOW;
int relay = 3;
int relayState = HIGH;
long previousDebounceTime = LOW; 
long debounceDelay = 50;


void setup() 
{
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, relayState);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int reading = digitalRead(button);
  if (reading != previousButtonState)
  {
    previousDebounceTime = millis();
  }

  if ((millis() - previousDebounceTime) > debounceDelay)
  {
    if (reading != buttonState)
    {
      buttonState = reading;
      if (buttonState == HIGH)
      {
        relayState = !relayState;
      }
    }
  }
  digitalWrite(relay, relayState);
  previousButtonState = reading;
}
