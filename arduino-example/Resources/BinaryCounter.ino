short counter = 1;

void determinLight(short pinNumber, short mask);
short calculateMask(short pinNumber);

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for (int i = 2; i < 6; i++)
  {
    determinLight(i, calculateMask(i));
  }
  delay(500);
  counter++;
}

void determinLight(short pinNumber, short mask)
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

short calculateMask(short pinNumber)
{
  return 1 << (pinNumber - 2);
}
