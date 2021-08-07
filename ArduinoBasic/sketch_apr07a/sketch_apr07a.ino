int ledPin = 3;    // chan ket noi voi LED ten board Iotmaker Uno X 
int brightness =0; // Bien thiet lap cuong do sang cho LED ten board 
int fadeAmount = 15; ;// Bien thiet lap mot buoc don gian thay doi cuong do sang










void setup() {
  
pinMode(ledPin,OUTPUT);

}

void loop() {
  analogWrite(ledPin,brightness);
  brightness= brightness + fadeAmount;

  if( brightness <=0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
delay(30);

}
