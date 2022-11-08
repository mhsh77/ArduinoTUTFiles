#include<SPI.h>
#define btn 2
#define led 3

volatile boolean received;
volatile byte Slavereceived,Slavesend;
int buttonvalue;
int x;

void setup()

{
  
  
  pinMode(btn,INPUT_PULLUP); 
  pinMode(led,OUTPUT);               
  pinMode(MISO,OUTPUT);                  

  SPCR |= _BV(SPE);                  
  received = false;

  SPI.attachInterrupt();                  
  
}

ISR (SPI_STC_vect)                        
{
  Slavereceived = SPDR;         
  received = true;                        
}

void loop()
{  
 if(received)                           
   {
      if (Slavereceived==1) 
      {
        digitalWrite(led,HIGH);       
      }else
      {
        digitalWrite(led,LOW);          
      }
      
      buttonvalue = digitalRead(btn);  
      
      if (buttonvalue == LOW)           
      {
        x=1;
        
      }else
      {
        x=0;
      }
      
  Slavesend=x;                             
  SPDR = Slavesend;                       
  delay(1);
}
}
