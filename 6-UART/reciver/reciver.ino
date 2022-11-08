#include<Wire.h>

int led1 = A5;
int led2 = A4;
int led3 = A3;


int recived = 0;

void setup(){
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  }

void loop(){
  if (Serial.available()){
    recived = Serial.read();
  if(recived==1){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      }
    if(recived==2){
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      }
    if(recived==3){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      }
  }
}


 
