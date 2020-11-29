const char LED_PIN = 13;
const int DELAY_TIME = 1000;

void start()
{
	pinMode(LED_PIN, OUTPUT);
}

void update()
{
    digitalWrite(LED_PIN, HIGH);
    delay(DELAY_TIME);
    digitalWrite(LED_PIN, LOW);
    delay(DELAY_TIME);
}
