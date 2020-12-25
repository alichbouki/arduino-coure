#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27, 16, 2);

int val, btn;

void setup() {
  lcd.begin(16, 2);
  lcd.init();
  lcd.setBacklight(HIGH);
  rec.enableIRIn();

  lcd.print("salut les amie");
  delay(250);
  lcd.clear();

  delay(250);
  lcd.print("ahh sa c'est mieu avec un scroll les amies");
  for (int i = 0; i < 32 ; i++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  lcd.clear();
}

void loop() {
  val = analogRead(A0);
  btn = digitalRead(2);

  lcd.print(val);

  if (btn == 1) {}

  else if (btn == 0) {
    digitalWrite(3, HIGH);

    lcd.print("cc c'est fun");
    delay (200);

    lcd.clear();
    digitalWrite(3, LOW);
  }
  delay (200);
}
