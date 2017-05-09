#include <NewPing.h>

#define trig  12  
#define echo  11  

#define motorpin1  3         
#define motorpin2  4       

NewPing radar(trig, echo);


void setup () 
{
  Serial.begin(9600);
  pinMode(motorpin1,OUTPUT);        
  pinMode(motorpin2,OUTPUT);        
} 

void loop () 
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  delay(200);                    
  Serial.print("Ping: ");
  Serial.print(radar.ping_cm()); 
  Serial.println("cm");


  
  if (radar.ping_cm() > 0.1 )
  if (radar.ping_cm() < 20.9 )
 
  {
   digitalWrite(motorpin1,HIGH);
   digitalWrite(motorpin2,LOW); 
   delay(50);
  }
  else
  {
   digitalWrite(motorpin2,LOW);
   digitalWrite(motorpin1,LOW);
   
  }
  
  }



