/*
  Arduino Proximity Alarm & Distance Tracker
  Hardware: Arduino Uno/Nano, HC-SR04 Ultrasonic Sensor, Buzzer & LED (shared on Pin 8)
*/

const int trigPin = 7;
const int echoPin = 6;
const int alertPin = 8; // Buzzer & Red LED wired in parallel

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(alertPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 1. Send 10-microsecond trigger pulse to HC-SR04
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // 2. Measure echo duration and calculate distance in cm
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // 3. Print raw distance for Serial Monitor and Serial Plotter
  Serial.println(distance);

  // 4. Proximity Check (< 10 cm triggers 3-second continuous alert)
  if (distance > 0 && distance < 10) {
    digitalWrite(alertPin, HIGH);
    delay(3000); 
    digitalWrite(alertPin, LOW);
  } else {
    // Normal Mode: Short synchronized tick every second
    digitalWrite(alertPin, HIGH);
    delay(100); 
    digitalWrite(alertPin, LOW);

    delay(900); // Complete the 1-second cadence
  }
}