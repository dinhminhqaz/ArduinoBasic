int redPin=11;
int greenPin=9;
int bluePin=10;
String myColor;
String msg=" What color do you want? ";



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
myColor=Serial.readString();
if(myColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
}
if(myColor=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,HIGH);
}
if(myColor=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
}
if(myColor=="yellow"){
  analogWrite(redPin,255);
  analogWrite(greenPin,125);
  analogWrite(bluePin,0);
  
}
if(myColor=="white"){
  analogWrite(redPin,255);
  analogWrite(greenPin,5);
  analogWrite(bluePin,20);
  
}
}
