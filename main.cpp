int ledPin = 13; // Location of the LED on the Arduino Board
int motionPin = 2; // Location of the Motor on the Arduino Board
int motionState = 0; // Motor state default

void setup() { // Runs once only at the start
  pinMode(ledPin, OUTPUT); // Allows the LED at location 13 to be turned ON or OFF
  pinMode(motionPin, INPUT); // Allows the Motor to read incoming signals/inputs
  Serial.begin(9600);
}

void loop() { // Loops the program every 0.1 seconds due to the delay
  motionState = digitalRead(motionPin);

  if (motionState == HIGH) { // Checks if the Motor State reads as ON
    digitalWrite(ledPin, HIGH); // Turns on the LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW); // Keeps the LED off otherwise if motor is not ON
  }

  delay(100); // Adds a 0.1 second or 100 millisecond wait on the program loop
}