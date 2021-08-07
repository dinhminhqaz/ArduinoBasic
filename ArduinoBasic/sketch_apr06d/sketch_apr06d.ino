const int buttonPin= 8;
const int ledPin = 3;
int buttonState = 0 ;












void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(115200);
Serial.println("init serial");

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if(buttonState == LOW){
  digitalWrite(ledPin,HIGH);
  Serial.println("PRESSED, LED ON");
  
}else {
  digitalWrite(ledPin, LOW);
  Serial.println("NOTHING, LED OFF");
  
}
}
