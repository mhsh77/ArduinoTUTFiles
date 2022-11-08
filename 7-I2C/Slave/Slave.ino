#include<Wire.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;


int recived = 0;

void setup(){
  Wire.begin(8);
  Wire.onReceive(reciveEvent);
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  }

void loop(){
  }
void reciveEvent(int howMany){
  recived=Wire.read();
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

 
