int led = 6;
int pot = A0;
int analogValue;
int ledValue;

void setup() {   
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}
void loop() {  
  analogValue = analogRead(pot);//0 1023
  ledValue = map(analogValue,0,1023,0,255);
  analogWrite(led,ledValue);//0 255
  delay(1);
}
