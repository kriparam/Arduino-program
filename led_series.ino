   int pin1=1;
   int pin2=2;
   int pin3=3;
   int pin4=4;
   int pin5=5;
   int pin6=6;
   int pin7=7;
   
  
  int x=2000;
void setup() {
 
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  
 
}


void loop() {
  //0
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);
  digitalWrite(pin6,1);
  digitalWrite(pin7,0); 
  delay(x);
   //1
  digitalWrite(pin1,0);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,0); 
   delay(x);
    //2
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,1); 
  delay(x);
  //3
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,1); 
  delay(x);
  //4
  digitalWrite(pin1,0);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
  delay(x);
  //5
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,0);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
  delay(x);
  //6
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,0);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
  delay(x);
  //7
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,0); 
  delay(x);
  //8
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
  delay(x);
  //9
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
  delay(x);
  //terminate
  
     
           }
