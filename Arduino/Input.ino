
// code for taking input : LDR, PIR, IR Sensor, etc.

int sensorPin = 2;

void setup()
{
    Serial.begin (9600);
    pinMode(sensorPin, INPUT);
}
 
void loop()
{
  int data = digitalRead (sensorPin);

  Serial.print("Sensor value:");
  Serial.println(data);
 
  delay(1000);
}