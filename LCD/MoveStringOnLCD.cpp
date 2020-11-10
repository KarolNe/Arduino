#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

String txt = "Karol";

void setup(){
	lcd.begin(16,2);
	lcd.clear();
}

void loop(){
	for(int i=0; i<16; i++{
		lcd.setCursor(i,0);
		lcd.print("Karol");
		delay(100);
		lcd.clear
	}
}