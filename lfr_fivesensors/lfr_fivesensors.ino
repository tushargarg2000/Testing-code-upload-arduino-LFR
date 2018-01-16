

void setup()
{
 pinMode(D4, OUTPUT);
  
Serial.begin(9600);
}


void loop()
{
 int a = Serial.read()  - '0';
 if( a== 1)
 {
  digitalWrite(D4 , LOW);
  delay(500);
 }
 if( a== 0)
 {
  digitalWrite(D4 , LOW);
  delay(500);
}
}
