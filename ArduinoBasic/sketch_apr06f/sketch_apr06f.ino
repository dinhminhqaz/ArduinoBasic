int ledPin = 3; // chan ket noi voi LED tren board Iotmaker Uno X
              
int btnPin = 2; // Chan co chuc nang interrupt tren board     

int ledState = LOW; // Gan trang thai den LED ban dau la LOW

void blink()
{
  if (ledState == LOW) {
    ledState = HIGH;
    
  }else{
    ledState = LOW;
    
  }
  digitalWrite(ledPin, ledState);
  
}
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btnPin), blink, FALLING);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
