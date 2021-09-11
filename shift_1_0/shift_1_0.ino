void setup() {
  // put your setup code here, to run once:
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   Serial.begin(9600);
   led_shift(0);
   led_shift(1);
}

void led_shift(int shift){
  if(shift == 1){
    for(int i=8;i<=11;i++){
      digitalWrite(i,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
    }
  }
  else if(shift == 0){
    for(int i=11;i>=8;i--){
      digitalWrite(i,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String data = Serial.readString();
    if(data == "left"){
//      Serial.println("left");
      led_shift(0);
    }
    else if(data == "right"){
//      Serial.println("right");
      led_shift(1);
    }
  }
}
