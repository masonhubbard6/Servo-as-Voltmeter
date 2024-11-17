/* 

 Controlling a servo position using a potentiometer (variable resistor) 

 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

 
 

 modified on 8 Nov 2013 

 by Scott Fitzgerald 

 http://www.arduino.cc/en/Tutorial/Knob 

*/ 

 
 

#include <Servo.h> 

 
 

Servo myservo;  // create Servo object to control a servo 

 
 

int potpin = A0;  // analog pin used to connect the potentiometer 

int val=0;   

int pos=0; // variable to read the value from the analog pin 

 
 

void setup() { 

  myservo.attach(9);  // attaches the servo on pin 9 to the Servo object 

 Serial.begin(9600);  

} 

 
 

void loop() { 

  val = analogRead(potpin);             

   

  int volt=map(val,0, 1023, 0, 500); 

  float voltage=volt/100.0; 

   pos = map(val, 0, 1023, 180, 0);      

  Serial.println(voltage); 

   

  myservo.write(pos); 

                 // sets the servo position according to the scaled value 

  delay(15);                           // waits for the servo to get there 

} 

 