int switchState = 0;
void setup(){
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}
void loop(){
  switchState = digitalRead(2);
  if (switchState == LOW) {
    //pas d'appui sur le bouton
    digitalWrite(3,HIGH); //Uniquement la
    digitalWrite(4,LOW); //LED verte s'allume.
    digitalWrite(5,LOW);
  }
  else { //appui sur le bouton
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    
    delay(250); //attendre un quart de seconde
    //allumer les LEDs
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(250); //attendre un quart de seconde
  }
}