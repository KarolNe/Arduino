#include <Keypad.h>

char keys[4][4] = {
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
};

byte rowPins[4] = {11,10,9,8}; // set columns and rows to pins
byte colPins[4] = {7,6,5,4};

// key mapping
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

// print in console
void setup(){
	Serial.begin(9600);
}

void loop(){
	char key = keypad.getKey();
	
	if(int(key) != 0) Serial.print(key);
}