Arduino Ultrasonic Alarm & Distance Tracker

An interactive Arduino project featuring real-time sonar distance tracking using an HC-SR04 sensor, a hobby servo, live visual plotting, and smart buzzer feedback.

 Features
- Live Sonar Ranging:** Measures distances via the HC-SR04 ultrasonic sensor.
- Serial Plotter Ready:** Streams clean numeric data for real-time waveform visualization in the Arduino IDE.
- Smart Alert System:** Triggers a 3-second continuous alert tone if objects get too close (< 10cm), while maintaining a 1-second cadence during normal operation.

 Pinout Configuration

| Component | Component Pin | Arduino Pin |
| :--- | :--- | :--- |
| HC-SR04 Ultrasonic** | VCC | 5V |
| | Trig | Digital 7 |
| | Echo | Digital 6 |
| | GND | GND |
| Hobby Servo | Signal (Orange) | Digital 9 |
| Buzzer| Positive (+) | Digital 8 |
| | Negative (-) | GND |

## Live Monitoring
Open the Arduino IDE Serial Plotter (`Ctrl + Shift + L`) at **9600 baud** to visualize the live distance data stream!
