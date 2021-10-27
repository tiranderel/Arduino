#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // Устанавливаем дисплей
void setup()
{
  lcd.init();                     
  lcd.backlight();// Включаем подсветку дисплея
  lcd.print("iarduino.ru");
  lcd.setCursor(8, 1);
  lcd.print("LCD 1602");
}
void loop()
{
  // Устанавливаем курсор на вторую строку и нулевой символ.
  lcd.setCursor(0, 1);
  lcd.print("h");
  lcd.setCursor(1, 1);
  lcd.print("e");
  lcd.setCursor(2, 1);
  lcd.print("l");
  lcd.setCursor(3, 1);
  lcd.print("l");
  lcd.setCursor(4, 1);
  // Выводим на экран количество секунд с момента запуска ардуины
  lcd.print("o");
}
