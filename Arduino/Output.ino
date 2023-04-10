
// code for giving output : LED Blinking, Relay ON/OFF, Buzzer ON/OFF

int sensorPin = 2;

void setup() // this runs when the board is first powered up
{
  pinMode(sensorPin, OUTPUT);
}

void loop() // this runs over and over again in infinite loop
{
  digitalWrite(sensorPin, HIGH);
  delay(1000);
  digitalWrite(sensorPin, LOW);   
  delay(1000);
}