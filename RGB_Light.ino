void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}
int i, a = 0, b = 0, c = 0;
void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
// digitalWrite(3,HIGH);
// digitalWrite(5,HIGH);
// digitalWrite(6,HIGH);
// delay(1000);
// digitalWrite(3,HIGH);
// digitalWrite(5,LOW);
// digitalWrite(6,LOW);
// delay(1000);
// digitalWrite(3,HIGH);
// digitalWrite(5,HIGH);
// digitalWrite(6,LOW);
// delay(1000);
// digitalWrite(3,LOW);
// digitalWrite(5,HIGH);
// digitalWrite(6,HIGH);
// delay(1000);
// digitalWrite(3,LOW);
// digitalWrite(5,LOW);
// digitalWrite(6,HIGH);
// delay(1000);
// digitalWrite(3,HIGH);
// digitalWrite(5,LOW);
// digitalWrite(6,HIGH);
// delay(1000);
// digitalWrite(3,LOW);
// digitalWrite(5,HIGH);
// digitalWrite(6,LOW);
// delay(1000);
for(int i = 0; i < 256; i= i+ 50)
{
  analogWrite(6, i);
  delay(100);
  for( a = 0; a < 256; a= a + 50)
{
  analogWrite(5, a);
   delay(100);
  for( b = 0; b < 256; b=b+50)
{
  analogWrite(3, b);
   delay(100);
}
}
}
// digitalWrite(3,LOW);
// digitalWrite(5,LOW);
// analogWrite(6,HIGH); // blue
// delay(1000);
// digitalWrite(3,LOW); // red
// digitalWrite(5,LOW);
// digitalWrite(6,LOW);
// delay(1000);
// digitalWrite(3,LOW);
// digitalWrite(5,HIGH); // green
// digitalWrite(6,LOW);
// delay(1000);

// digitalWrite(3,LOW);
// digitalWrite(5,HIGH);
// digitalWrite(6,HIGH);
// delay(1000);
}
