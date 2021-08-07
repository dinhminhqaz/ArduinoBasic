
const int buttonPin = 8;
const int ledPin = 3;
int ledState = HIGH;
int buttonState;
int lastButtonState = HIGH;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup(){
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(11520);
  digitalWrite(ledPin, ledState);
  
}

void loop() {
 int reading = digitalRead(buttonPin);
 if (reading != lastButtonState){
  lastDebounceTime = millis();
  
 }
if ((millis() - lastDebounceTime) > debounceDelay) {
  if (reading != buttonState){
    buttonState = reading;
    if(buttonState == LOW){
      ledState= !ledState;
      
    }
  }
}
digitalWrite(ledPin, ledState);
lastButtonState = reading;

}
