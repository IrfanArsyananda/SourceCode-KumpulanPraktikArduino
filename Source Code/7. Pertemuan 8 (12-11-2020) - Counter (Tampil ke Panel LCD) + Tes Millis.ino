#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int switchPin = 7;
int val = 0; 
int counter = 0;
int currentState = 0;
int previousState = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Halo, Irfan-021!");
  
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  val = digitalRead(switchPin);
	
  	if (val == HIGH) {
      	currentState = 1;
	}
	else {
      	currentState = 0;
	}
  
	if(currentState != previousState){
		if(currentState == 1){
			counter = counter + 1;
          	lcd.print(counter);
		}
	previousState = currentState;
	delay(100);
	}
  
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
//Counter with LCD and Test Millis by : Irfan Arsyananda-021