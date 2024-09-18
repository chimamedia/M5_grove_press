#include <M5Stack.h>

// タッチセンサー接続ピン
const int touchPin = 22;

void setup() {
  // M5Stackの初期化
  M5.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.print("Grove Touch Sensor Test");

  // タッチセンサーのピンを入力モードに設定
  pinMode(touchPin, INPUT);
}

void loop() {
  // タッチセンサーの状態を読み取る
  int touchState = digitalRead(touchPin);

  // タッチされたらディスプレイに表示
  if (touchState == HIGH) {
    M5.Lcd.setCursor(0, 40);
    M5.Lcd.println("Touch detected");
  } else {
    M5.Lcd.setCursor(0, 40);
    M5.Lcd.println("No touch       ");
  }

  delay(100);
}
