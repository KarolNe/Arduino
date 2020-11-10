#define LED 7
#define BUTTON 4

void setup(){
	pinMode(LED,OUTPUT);
	pinMode(BUTTON,INPUT_PULLUP);
}

void loop(){
	if(digitalRead(BUTTON) == LOW){
		digitalWrite(LED,HIGH);
		delay(100);
	}
	else{
		digitalWrite(LED,LOW);
		delay(100);
	}
}