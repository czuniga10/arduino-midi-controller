byte musicNote[8] = {
  0b00111111,
  0b00100001,
  0b00111111,
  0b00100001,
  0b00100001,
  0b00100001,
  0b11100111,
  0b11100111
}

void startUp() {
  lcd.createChar(0,musicNote);
  for (int i = 0; i <= 15; i++) {
    if(i % 2 !== 0) {
      lcd.setCursor(0, 0);
    } else {
      lcd.setCursor(0, 1);
    }
    
    lcd.write(byte(0));
    lcd.scrollDisplayRight();
    delay(90);
  }
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("By: Jordan, Jim")
  lcd.setCursor(0, 1);
  lcd.print("Hayden and Chad")
  delay(5000);
  for (int i = 0; i <= 15; i++) {
    lcd.scrollDisplayRight();
    delay(90);
  }
  lcd.clear();
}
