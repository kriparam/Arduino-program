
#define led 9;
#define button 10;
 

 void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(10)==HIGH);
 digitalWrite(9,OUTPUT);
}
