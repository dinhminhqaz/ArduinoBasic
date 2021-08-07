int bluePin=12;
int yellowPin=11;
int redPin=10;
String myColor;
String msg=" What Color LED? ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(bluePin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(redPin,OUTPUT);

}

void loop() {
Serial.println(msg);
while (Serial.available()==0){
  
  }

myColor=Serial.readString();

  if(myColor =="blue"){
    digitalWrite(bluePin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
    
  }

    if(myColor =="yellow"){
    digitalWrite(bluePin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
    
  }

    if(myColor =="red"){
    digitalWrite(bluePin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
    
  }
}
