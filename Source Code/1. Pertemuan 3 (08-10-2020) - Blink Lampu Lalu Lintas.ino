int Kaki13 = 13;
int Kaki12 = 12;
int Kaki11 = 11;

void setup() {
  pinMode(Kaki13, OUTPUT);
  pinMode(Kaki12, OUTPUT);
  pinMode(Kaki11, OUTPUT);
}

void loop() {
  digitalWrite(Kaki13, HIGH);
  delay(1000);
  digitalWrite(Kaki13, LOW);
  delay(0);
  
  digitalWrite(Kaki12, HIGH);
  delay(1000);
  digitalWrite(Kaki12, LOW);
  delay(0);
  
  digitalWrite(Kaki11, HIGH);
  delay(1000);
  digitalWrite(Kaki11, LOW);
  delay(0);
}
//Lampu Lalu Lintas by : Irfan Arsyananda-021
