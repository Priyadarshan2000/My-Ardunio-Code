int counter=7;
void setup() {
  // put your setup code here, to run once:
//  piinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int sw1=digitalRead(5);
  if (sw1==0)
  {
    
    delay(500);
    digitalWrite(counter, LOW);
    counter++;    
    if (counter>11)
    {
      counter=8;
    }
    digitalWrite(counter, HIGH);    
  }  
}
