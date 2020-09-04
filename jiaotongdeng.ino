int redled=11;
int yellowled=12;
int greenled=13;
void setup() 
{
  pinMode (redled,OUTPUT);
  pinMode (yellowled,OUTPUT);
  pinMode (greenled,OUTPUT);

}

void loop() {
  digitalWrite (11,HIGH);
  delay (3000);
  digitalWrite (11,LOW);
  delay (500);
  for (int i=0;i<3;i++)
  {
    digitalWrite (12,HIGH);
    delay (500);
    digitalWrite (12,LOW);
    delay (500);
  }
  digitalWrite (13,HIGH);
  delay (3000);
  digitalWrite(13,LOW);
  delay(500);
}
