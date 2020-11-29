const char LED_PIN = 7;
const long SERIAL_PORT = 115200;

void waitForMessage();
void updateDiodeLight(char lightValue);

void start()
{
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(SERIAL_PORT);
}

void update()
{
    Serial.println("Please enter your number: ");
    waitForMessage();
    String text = Serial.readStringUntil('\n');
    Serial.print("Your number is: ");
    Serial.println(text);
    updateDiodeLight(text.toInt());
}

void waitForMessage()
{
    while(!Serial.available()) {}
}

void updateDiodeLight(char lightValue)
{
    if(lightValue > 0)
        digitalWrite(LED_PIN, HIGH);
    else
        digitalWrite(LED_PIN, LOW);
}