
const int ldrPin = A0;
const int ledPin1 = 10;
const int  buzzer = 12;
const int ledPin2 = 11;


int ldrValue = 0;
int ldrlevel1 = 600;
int ldrlevel2 = 800;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);
  if (ldrValue < ldrlevel1) {
     digitalWrite(ledPin1, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin2, LOW);
  }
  else if (ldrValue < ldrlevel2) {
   
    digitalWrite(ledPin1, LOW);
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin2, HIGH);
  }
  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin2, LOW);
  }
}
