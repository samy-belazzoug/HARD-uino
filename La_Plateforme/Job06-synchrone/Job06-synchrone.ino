void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500); // Wait for 500 millisecond(s)
}