//Pull up condition, so in case of input 0, the led glows

int c=0;
int last_state=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchData1 = digitalRead(4);
  if(switchData1 != last_state){    //state change detection
    delay(100);
    Serial.println("state change");
    if(switchData1 == 0){
      Serial.println("sw pressed");
      delay(300);
    c++;
    Serial.println(c);
    if(c%2!=0){
      digitalWrite(8,HIGH);
    }
    else{
      digitalWrite(8,LOW);
    }
   }  
  }
  last_state = switchData1;
}
