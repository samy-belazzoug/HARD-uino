void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(500); // Wait for 500 millisecond(s)
}