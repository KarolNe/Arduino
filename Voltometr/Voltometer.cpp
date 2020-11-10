#include <LiquidCrystal.h>

LiquidCrystal lcd(4,5,6,7,8,9);

float u;
float r;

void setup(){
	lcd.begin(16,2);
	lcd.clear();
	pinMode(A0,INPUT);
	u = 0;
	r = 0;
}

void loop(){
	// read voltage from battery
	r = analogRead(A0);
	u = r*5/1023;
	
	//printLCD
	lcd.setCursor(0,0);
	lcd.print(u);
	lcd.setCursor(4,0);
	lcd.print("V");
	delay(100);
}