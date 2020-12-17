int pushButton = 2;
int lamp1 = 13;
int lamp2 = 12;
int lamp3 = 11;

void setup()
{
  pinMode(pushButton, INPUT);
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(lamp3, OUTPUT);
}

void loop()
{
  //baca kondisi tegangan di kaki input (kaki no 2)
  int buttonState = digitalRead(pushButton);
  
  delay(1);
  if(buttonState == HIGH){
    digitalWrite(lamp1,HIGH);    
    digitalWrite(lamp2,HIGH);  
    digitalWrite(lamp3,HIGH);  
  }else{
  	digitalWrite(lamp1,LOW);
    digitalWrite(lamp2,LOW);
    digitalWrite(lamp3,LOW);
  }
}
//Digital Input by : Irfan Arsyananda-021