#define echoPin 11
#define trigPin 12   
#define ledPin 5
long duration, distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delay(2);

digitalWrite(trigPin,HIGH);
delay(10);

digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=duration/58.2;
Serial.println(distance);

if(distance<=10)
{
  digitalWrite(ledPin,HIGH);
  }
  else if(distance>10)
  {
    digitalWrite(ledPin,LOW);
    }
}
