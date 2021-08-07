const int RED_PIN = 9;    // led đỏ
const int GREEN_PIN = 10; // led xanh lá
const int BLUE_PIN = 11;  // led xanh dương
const int DELAY_TIME = 500;
void setup()
{
  // Khởi tạo các chân là OUTPUT
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop()
{
  displayAllBasicColors();  //Thể hiện toàn bộ các màu cơ bản
  showSpectrum();          //Hàm showSpectrum để chạy hiệu ứng cầu vồng.
}

void displayAllBasicColors()
{
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(DELAY_TIME);

  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
 
  delay(DELAY_TIME);
 
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
 
  delay(DELAY_TIME);
 
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
 
  delay(DELAY_TIME);
 
 
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
 
  delay(DELAY_TIME);
 
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
 
  delay(DELAY_TIME);
 
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
 
  delay(DELAY_TIME);
 
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
 
  delay(DELAY_TIME);
  
  //Code này sẽ bật từng màu đèn Đỏ - Xanh Lá - Xanh Biển - Đỏ + Xanh lá - Xanh Lá + Xanh biển - Đỏ + Xanh biển - Cả 3 màu
  //Các bạn hãy thử quan sát xem màu sắc khi bật 2 màu trở lên nhé.
}

void showSpectrum()
{
  for (int i = 0; i < 768; i++)
  {
    showRGB(i);  // Gọi hàm RGB để phân vùng và xuất xung
    delay(10);   // Delay 10ms 
  }
}

void showRGB(int color)
{
  int redPWM;
  int greenPWM;
  int bluePWM;
 
  if (color <= 255)          // phân vùng 1
  {
    redPWM = 255 - color;    // red đi từ sáng về tắt
    greenPWM = color;        // green đi từ tắt thành sáng
    bluePWM = 0;             // blue luôn tắt
  }
  else if (color <= 511)     // phân vùng 2
  {
    redPWM = 0;                     // đỏ luôn tắt
    greenPWM = 255 - (color - 256); // green đi từ sáng về tắt
    bluePWM = (color - 256);        // blue đi từ tắt thành sáng
  }
  else // color >= 512       // phân vùng 3
  {
    redPWM = (color - 512);         // red tắt rồi lại sáng
    greenPWM = 0;                   // green luôn tắt
    bluePWM = 255 - (color - 512);  // blue sáng rồi lại tắt
  }
 
  analogWrite(RED_PIN, redPWM); // Xuất ra xung
  analogWrite(BLUE_PIN, bluePWM);
  analogWrite(GREEN_PIN, greenPWM);
}
