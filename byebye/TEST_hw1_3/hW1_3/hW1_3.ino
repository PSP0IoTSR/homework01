void setup()
{
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(14));
  if(analogRead(14) <= 4096/3){
    digitalWrite(15, LOW);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    delay(30);
  }
  else if(analogRead(14) > 4096/3 && analogRead(14) <= 4096/3*2){
    digitalWrite(15, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    delay(30);
  }
  else{
    digitalWrite(15, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    delay(30);
  }
}
