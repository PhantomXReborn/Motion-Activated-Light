# 💡 Motion-Activated Light (Arduino Project)

A beginner-friendly Arduino project that detects motion using a PIR sensor and automatically turns on an LED. This project is perfect for learning the fundamentals of physical computing, including sensor input, digital output, and basic programming logic.

---

## 🚀 Features
- Detects motion using a PIR (Passive Infrared) sensor
- Automatically turns an LED on/off based on movement
- Simple and easy-to-understand code
- Great foundation for more advanced automation projects

---

## 🧠 What You'll Learn
- How to read digital input from a sensor
- How to control outputs (LEDs) using Arduino
- Using `if` statements for decision-making
- Basic circuit wiring with a breadboard

---

## 🧰 Components Required
- Arduino Uno (or compatible board)
- PIR Motion Sensor (HC-SR501)
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

---

## ⚙️ Circuit Setup

### Connections:
- PIR Sensor:
  - VCC → 5V
  - GND → GND
  - OUT → Pin 2

- LED:
  - Positive (long leg) → Pin 13 (through 220Ω resistor)
  - Negative (short leg) → GND

---

## 💻 Code

```cpp
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
