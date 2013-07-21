
#define LED_PIN 13

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Hello Pi");
    delay(1000);
}
