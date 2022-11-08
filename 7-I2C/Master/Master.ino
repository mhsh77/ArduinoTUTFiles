#include <Wire.h>

int btn1 = 13;
int btn2 = 12;
int btn3 = 11;


void setup(){
  Wire.begin();
  pinMode(btn1,INPUT_PULLUP);
  pinMode(btn2,INPUT_PULLUP);
  pinMode(btn3,INPUT_PULLUP);
}
void loop(){
  Wire.beginTransmission(8);

  if(digitalRead(btn1)==LOW){
    Wire.write(1);
  }
  if(digitalRead(btn2)==LOW){
    Wire.write(2);
  }
  if(digitalRead(btn3)==LOW){
    Wire.write(3);
  }
  Wire.endTransmission();

  
  }
