int count = 7;
int sw_last = 1;
void blink()
{
  for(int i=1;i<=5;i++)
  {
  digitalWrite(count, LOW);
  delay(200);
  digitalWrite(count, HIGH);
  delay(200);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw1 = digitalRead(6);
  int sw2 = digitalRead(7);
  if (sw1 != sw_last)
  {
    delay(50);
    if (sw1 == 0)
    {
      delay(300);
      digitalWrite(count, LOW);
      count++;
      if (count > 11)
      {
        count = 8;
      }
      digitalWrite(count, HIGH);

    }
    
  }
  sw_last = sw1;
  
  if (sw2 == 0)
  {
    blink();

  }
}
