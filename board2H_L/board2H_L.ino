int ledPin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
 }

void loop()
{
  // changed print to write
  Serial.print('H');
  digitalWrite(ledPin,HIGH);
  delay(1000);
  Serial.print('L');
  digitalWrite(ledPin,LOW);
  delay(1000);
}
