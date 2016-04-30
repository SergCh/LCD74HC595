#include <LCD74HC595.h>
/*
 * pin 6 -> Data  (14)
 * pin 5 -> Clock (11)
 * pin 4 -> Latch (12)
 */


LCD74HC595 lcd(6,5,4);

void setup() {

  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.write("Hello...");
  lcd.setCursor(0,1);
  lcd.write("WORLD!!!");
}

void loop() {}
