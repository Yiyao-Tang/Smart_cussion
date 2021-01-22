

#include <SoftwareSerial.h>

//
//#include <Servo.h>
//
#include <SoftwareSerial.h>
//
//
//int potpin=0;
//float val=0;
////int i;
//
//
//
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(potpin,INPUT);
//  Serial.begin(9600);
//}
//
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  val=analogRead(potpin);
//  Serial.println(val);
//  delay(1000);
//}
#define sensorPin1 A1
#define sensorPin2 A2
#define sensorPin3 A3
#define sensorPin4 A4
void setup() {
  
   pinMode(2, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  int x1=analogRead(sensorPin1);
  int x2=analogRead(sensorPin2);
  int x3=analogRead(sensorPin3);
  int x4=analogRead(sensorPin4);
  Serial.println("The first sensor:");
  Serial.println(x1);
  Serial.println("The second sensor:");
  Serial.println(x2);
  Serial.println("The third sensor:");
  Serial.println(x3);
  Serial.println("The fourth sensor:");
  Serial.println(x4);
  while(x1>x2+x3+x4||x2>x1+x3+x4+800||x3>x1+x2+x4||x4>x1+x2+x3)
  {
    digitalWrite(2, HIGH); 
    x1=analogRead(sensorPin1);
    x2=analogRead(sensorPin2);
    x3=analogRead(sensorPin3);
    x4=analogRead(sensorPin4);
    };
   digitalWrite(2, LOW);  
  delay(500); 
  
}
 
  
  
  
  
