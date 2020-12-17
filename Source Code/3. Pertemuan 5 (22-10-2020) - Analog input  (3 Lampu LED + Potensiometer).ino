int sensorPin = A0; // input pin untuk potensiometer
int lamp1 = 13;
int lamp2 = 12;
int lamp3 = 11;      
int sensorValue = 0;

void setup()
{
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(lamp3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // baca input di analog pin 0
  sensorValue = analogRead(A0);
  // Convert bacaan analog (from 0 - 1023) to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out nilai yang terbaca
  int outputValue = map(sensorValue, 0, 1023, 0, 255);
  
  if(voltage>=0 && voltage<1.7){
    digitalWrite(lamp1,HIGH);    
    digitalWrite(lamp2,LOW);  
    digitalWrite(lamp3,LOW);
  }else if(voltage>1.7 && voltage<3.4){
    digitalWrite(lamp1,LOW);    
    digitalWrite(lamp2,HIGH);  
    digitalWrite(lamp3,LOW);
  }else{
    digitalWrite(lamp1,LOW);    
    digitalWrite(lamp2,LOW);  
    digitalWrite(lamp3,HIGH);
  }
  Serial.println(voltage);
}
//Analog Input by : Irfan Arsyananda-021