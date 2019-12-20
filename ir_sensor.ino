
void setup() {
  // put your setup code here, to run once:
//pinMode(13,OUTPUT);
pinMode(8,OUTPUT);



pinMode(4,INPUT);
//pinMode(3,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
if(digitalRead(4)==LOW )
{ 
  digitalWrite(8,HIGH);
  }
 //* else if(digitalRead(4)){
        
      // digitalWrite(13,LOW);
      // digitalWrite(8,HIGH);
   // }
    else{
        digitalWrite(8,LOW);
      }
}
