const int humiditySensorPin = A0;
const int humiditySensorSwitcherPin = 11;
const int waterPumpSwitcherPin = 12;

void setup()
{
    Serial.begin(9600);
    pinMode(humiditySensorPin, INPUT);
    pinMode(humiditySensorSwitcherPin, OUTPUT);
    pinMode(waterPumpSwitcherPin, OUTPUT);
    digitalWrite(humiditySensorSwitcherPin, HIGH);
}

void loop()
{
    int humidityValue = analogRead(humiditySensorPin);
    Serial.println(humidityValue);
    if (humidityValue > 600)
    {
        digitalWrite(waterPumpSwitcherPin, HIGH);
    }
    else
    {
        digitalWrite(waterPumpSwitcherPin, LOW);
    }
}