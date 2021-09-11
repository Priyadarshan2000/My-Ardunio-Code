void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=11;i>=8;i--)
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
  }
  for(int i=8;i<=11;i++)
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
  }
  
//  digitalWrite(8,HIGH);
//  delay(1000);
//  digitalWrite(8,LOW);
//  digitalWrite(9,HIGH);
//  delay(1000);
//  digitalWrite(9,LOW);
//  digitalWrite(10,HIGH);
//  delay(1000);
//  digitalWrite(10,LOW);
//  digitalWrite(11,HIGH);
//  delay(1000);
//  digitalWrite(11,LOW);
}
