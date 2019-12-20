int LM35 = A5;
int sensorvalue = 0;
int led1 = 13;
 int led2=12;
void setup() {
  // put you,r setup code here, to run once:
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 Serial.begin(9600);
 
 
}

void loop() {
  // put your main code here, to run repeatedly:
sensorvalue = analogRead(LM35);
float nv=(sensorvalue/1024.0)/5000;
float temp =nv/10;
Serial.print("tempreture=");
Serial.print(temp);
Serial.print("*C");
Serial.println();
delay(500);
if(temp>0 && temp<50){
digitalWrite(led1,HIGH);
}
else{
  pinMode(led1,LOW);
  }
}
