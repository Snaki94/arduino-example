const char INPUT_PIN = A0;
const char POWER_PIN = 9;
const long SERIAL_PORT = 115200;
const int DELAY_TIME = 500;

int outVoltage;

void start()
{
  pinMode(INPUT_PIN, INPUT);
  pinMode(POWER_PIN, OUTPUT);
  Serial.begin(SERIAL_PORT);
}

void update()
{
  digitalWrite(POWER_PIN, HIGH);
  outVoltage = analogRead(INPUT_PIN);
  Serial.println(outVoltage * 5 / 1023.0);
  delay(DELAY_TIME);
}
