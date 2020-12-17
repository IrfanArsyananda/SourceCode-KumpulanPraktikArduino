#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

//deklarasi variabel
long duration; //variabel durasi
int distance; //variabel jarak

int merah = 13;//variabel LED
int kuning = 12;
int hijau = 11; 

void setup() {
  pinMode(trigPin, OUTPUT); //Set trigPin as OUTPUT
  pinMode(echoPin, INPUT); //Set echoPin as INPUT
  Serial.begin(9600); //Serial komunikasi media ke monitor
  //print text ke monitor
  Serial.println("Ultrasonic Sensor HC-SR04 Test");
  Serial.println("with Arduino UNO R3");
  //set LED OUTPUT
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
  
}

void loop() {
  //Meng enol kan kondisi trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  //Set trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //baca echoPin, kembalikan nilai sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  //menghitung jarak
  distance = duration * 0.034 / 2; //Speed of sound wave divided by 2 (go and back)
  //memunculkan jarak ke Serial Monitor
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance > 0 && distance < 70){
    digitalWrite(merah, HIGH);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, LOW);
  }else if (distance > 70 && distance < 100){
    digitalWrite(merah, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(hijau, LOW);
  }else if (distance > 100){            
    digitalWrite(merah, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, HIGH);
  }
  
}
//Sensor Ultrasonik + 3 LED by : Irfan Arsyananda-021