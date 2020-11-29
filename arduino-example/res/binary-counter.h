char counter = 1;

const int DELAY_TIME = 500;
const char LED_PIN_01 = 1;
const char LED_PIN_02 = 2;
const char LED_PIN_03 = 3;
const char LED_PIN_04 = 4;

void determinLight(char pinNumber, char mask);
char calculateMask(char pinNumber);

void start()
{
  pinMode(LED_PIN_01, OUTPUT);
  pinMode(LED_PIN_02, OUTPUT);
  pinMode(LED_PIN_03, OUTPUT);
  pinMode(LED_PIN_04, OUTPUT);
}

void update()
{
  for (int i = 1; i < 5; i++)
  {
    determinLight(i, calculateMask(i));
  }
  delay(DELAY_TIME);
  counter++;
}

void determinLight(char pinNumber, char mask)
{
  if (counter & mask)
  {
    digitalWrite(pinNumber, HIGH);
  }
  else
  {
    digitalWrite(pinNumber, LOW);
  }
}

char calculateMask(char pinNumber)
{
  return 1 << (pinNumber - 1);
}
