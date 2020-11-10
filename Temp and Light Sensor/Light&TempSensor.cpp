#include <LiquidCrystal.h>

LiquidCrystal lcd(4,5,6,7,8,9);

void setup(){
	lcd.begin(16,2);
	lcd.clear();
	pinMode(A0,INPUT);
	pinMode(A1,INPUT);
}

void loop(){
	// TempSensor
	float tempSensor = analogRead(A0); // 0-1023
	float voltage = (tempSensor * 5000)/1024;
	float temp = voltage/10;
	
	// LightSensor
	float lightSensor = analogRead(A1); // 0-1023
	
	// LCDprint
	lcd.setCursor(0,0);
	lcd.print(temp);
	lcd.setCursor(0,1);
	lcd.print(lightSensor);
	delay(100);
}