   int pin1=1;
   int pin2=2;
   int pin3=3;
   int pin4=4;
   int pin5=5;
   int pin6=6;
   int pin7=7;
   int buttonpin=8;//
   int buttonstatus=0;//
   int p=0;//variable  
  
  int x=500;
void setup() {
 
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(buttonpin ,INPUT);
 
}


void loop() {
  buttonstatus=digitalRead(buttonpin);
 if(buttonstatus==HIGH)
 {
  p++;
  delay(1000);
 }
 if(p==0)
 {
 
  //0
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);
  digitalWrite(pin6,1);
  digitalWrite(pin7,0); 
 }
  if(p==1){
   //1
  digitalWrite(pin1,0);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,0); 
  }
  if(p==2){
    //2
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,1); 
  }
  if(p==3){
    
 
  //3
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,1); 
}
if(p==4){
  //4
  digitalWrite(pin1,0);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);       
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
}
if(p==5){
  //5
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,0);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
}
if(p==6){
  //6
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,0);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
}
if(p==7)
{
  //7
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,0);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,0);
  digitalWrite(pin7,0); 
}
if(p==8){
  //8
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,1);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
}
if(p==9){
  //9
  digitalWrite(pin1,1);                      
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);   
  digitalWrite(pin4,1);
  digitalWrite(pin5,0);                     
  digitalWrite(pin6,1);
  digitalWrite(pin7,1); 
}
 if(p==10){
  p=0;}

  //terminate
}
     
