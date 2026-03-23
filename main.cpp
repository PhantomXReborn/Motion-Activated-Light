int ledPin = 13;
int motionPin = 2;
int motionState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  motionState = digitalRead(motionPin);

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}