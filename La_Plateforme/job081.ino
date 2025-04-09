int i = 0;

void setup()
{
  pinMode(3,OUTPUT);
}

void loop()
{
    while (i != 255) {
    analogWrite(3,i);
    delay(1000);
      i += 25;}
    
  }