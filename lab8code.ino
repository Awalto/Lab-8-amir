#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int voltageV = A0;  // input pin

void setup() {

lcd.init();

lcd.backlight();

pinMode (voltageV, INPUT);

pinMode(13, OUTPUT);

}

void loop() {

  digitalWrite(13, HIGH);

  int VoltageMsmt = analogRead(voltageV);

  float Vcalc = (5/1023)*VoltageMsmt;

  lcd.setCursor(0, 0);

  lcd.print("Batt ");

  lcd.print(Vcalc);

}