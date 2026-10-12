# Arduino Proximity Alarm & Sonar Tracker

An interactive, breadboard-free Arduino project featuring real-time distance tracking using an HC-SR04 ultrasonic sensor, live waveform visualization, and synchronized acoustic-visual feedback.

## Features
- **Breadboard-Free Design:** Direct-pin prototyping using flexible jumper wires.
- **Live Sonar Ranging:** Measures distances via the HC-SR04 ultrasonic sensor at a steady 1-second cadence.
- **Synchronized Feedback:** Buzzer and Red LED wired in parallel on a single digital pin for simultaneous audio/visual cues.
- **Smart Proximity Trigger:** Automatically shifts from normal ticking to a heavy 3-second continuous alarm when an object approaches within $10\text{ cm}$.
- **Serial Plotter Compatible:** Streams raw numeric data directly for real-time waveform visualization in the Arduino IDE.

---

## Circuit Pinout Configuration

| Component | Component Pin | Arduino Pin / Header |
| :--- | :--- | :--- |
| **HC-SR04 Ultrasonic** | VCC | 5V |
| | Trig | Digital Pin 7 |
| | Echo | Digital Pin 6 |
| | GND | GND |
| **Buzzer & Red LED (Parallel)** | Positive (+) / Anode | Digital Pin 8 |
| | Negative (-) / Cathode | GND |


## Getting Started
1. Connect your hardware according to the pinout table above.
2. Open the `proximity_alarm.ino` file in the Arduino IDE.
3. Upload the code to your Arduino Uno or Nano.
4. Open the **Serial Plotter** (`Ctrl + Shift + L` / `Cmd + Shift + L`) at **9600 baud** to visualize live sensor data!
