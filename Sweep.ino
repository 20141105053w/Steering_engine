
#include <Servo.h>

Servo myservo;  

int pos = 0;   

void setup() {
  myservo.attach(9);  
  pinMode(13, OUTPUT);
}



void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);   
  delay(1000);           
}

