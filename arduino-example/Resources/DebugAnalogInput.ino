int readPin = A0;
int Pin9 = 9;
int outVoltage;

void setup()
{
  pinMode(readPin, INPUT);
  pinMode(Pin9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(Pin9, HIGH);
  outVoltage = analogRead(readPin);
  Serial.println(outVoltage * 5 / 1023.0);
  delay(500);
}
