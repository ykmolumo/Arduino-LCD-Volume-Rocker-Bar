#include <Wire.h> 

#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 10, 5, 4, 3, 2);


void setup() {
  
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.begin(16,2);
  

}

void loop() {
  int value = analogRead(A0); // read of potentiometer value
  int nivel = map(value, 0, 1000, 0, 16);

  lcd.setCursor(0,0);
  lcd.print("Volume:");
  lcd.setCursor(7,0);
  lcd.print(value);
  for (int i=0;i<nivel;i++){
    lcd.setCursor(i, 1);
    lcd.print(char(255));
  } 

  delay(200);
  lcd.clear();

}
