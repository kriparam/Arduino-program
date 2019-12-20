#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo; 
int pos = 0; 
String value;
int TxD = 11;
int RxD = 10;
int servoposition;
SoftwareSerial bluetooth(TxD, RxD);

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);       // start serial communication at 9600bps
  bluetooth.begin(9600);
}

void loop() {
  
  Serial.println(value);
 if (bluetooth.available())
   {
    value = bluetooth.readString();

    
    if (value == "on"){
     for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
      }

  
          if (value == "off"){
            
       
      }
      
        

   
   } }
