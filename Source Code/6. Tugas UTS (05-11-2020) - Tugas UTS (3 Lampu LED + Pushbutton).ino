int ledPin = 13;
int merah = 12; // choose the pin for the LED
int kuning = 11;
int hijau = 10; 
int switchPin =2; // choose the input pin (for a pushbutton)
int val = 0; // variable for reading the pin status
int counter = 0;
int currentState = 0;
int previousState = 0;

void setup() {
  	pinMode(ledPin, OUTPUT);
  	pinMode(merah, OUTPUT); // declare LED as output
  	pinMode(kuning, OUTPUT);
  	pinMode(hijau, OUTPUT);
	pinMode(switchPin, INPUT); // declare pushbutton as input
	Serial.begin(9600);
}

void loop(){
	val = digitalRead(switchPin); // read input value
	
  	if (val == HIGH) { // check if the input is HIGH (button released)
		digitalWrite(ledPin, HIGH); // turn LED on
      	currentState = 1;
	}
	else {
		digitalWrite(ledPin, LOW); // turn LED off
      	currentState = 0;
	}
  
	if(currentState != previousState){
		if(currentState == 1){
			counter = counter + 1;
          		if(counter == 4){
          			counter = 1;
          		}
          	Serial.println(counter);
          	if(counter == 1){
          		digitalWrite(merah, HIGH);
            	digitalWrite(kuning, LOW);
            	digitalWrite(hijau, LOW);
          	}else if (counter == 2){
          		digitalWrite(merah, HIGH);
            	digitalWrite(kuning, HIGH);
            	digitalWrite(hijau, LOW);
          	}else{            
          		digitalWrite(merah, HIGH);
            	digitalWrite(kuning, HIGH);
            	digitalWrite(hijau, HIGH);
		  	}
		}
	previousState = currentState;
	delay(100);
	}
}
//Tugas UTS Counter LED by : Irfan Arsyananda-021