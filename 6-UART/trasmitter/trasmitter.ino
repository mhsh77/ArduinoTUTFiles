
int btn1 = 13;
int btn2 = 12;
int btn3 = 11;


void setup(){
  Serial.begin(9600);
  pinMode(btn1,INPUT_PULLUP);
  pinMode(btn2,INPUT_PULLUP);
  pinMode(btn3,INPUT_PULLUP);
}
void loop(){
  

  if(digitalRead(btn1)==LOW){
    Serial.write(1);
  }
  if(digitalRead(btn2)==LOW){
    Serial.write(2);
  }
  if(digitalRead(btn3)==LOW){
    Serial.write(3);
  }
  }
