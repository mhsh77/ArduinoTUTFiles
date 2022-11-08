#include<SPI.h>                        
#define btn 2
#define led 3           


int x;
int value;

void setup (void)

{              
  
  pinMode(btn,INPUT_PULLUP);              
  pinMode(led,OUTPUT);                  
  
  SPI.begin();                            
  SPI.setClockDivider(SPI_CLOCK_DIV8); 
  digitalWrite(SS,HIGH);                  
}

void loop(void)
{
  byte m_send,m_receive;          

  value = digitalRead(btn); 

  if(value == LOW)                
  {
    x = 1;
  }
  else
  {
    x = 0;
  }
  
  digitalWrite(SS, LOW);                  
  
  m_send = x;                            
  m_receive=SPI.transfer(m_send); 
  
  if(m_receive == 1)                 
  {
    digitalWrite(led,HIGH);             
  }
  else
  {
   digitalWrite(led,LOW);              
  }
  delay(1);
}
