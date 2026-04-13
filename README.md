# 🍺 Alcohol Sensing Display With Alarm

## 📖 Project Overview
The Alcohol Sensing Display With Alarm is an embedded systems-based project developed using Arduino Uno and MQ3 alcohol sensor. This system is designed to detect the presence of alcohol in the environment and provide real-time alerts using a buzzer and LCD display.

The system continuously monitors alcohol concentration and alerts the user when it exceeds a predefined threshold level. This project is useful in safety-critical applications such as preventing drunk driving, industrial monitoring, and personal safety systems.

---

## 🎯 Objectives
- To detect alcohol using MQ3 gas sensor
- To display real-time sensor values on LCD
- To trigger an alarm when alcohol level exceeds safe limit
- To design a low-cost and efficient embedded safety system

---

## ⚙️ Components Used
- Arduino Uno
- MQ3 Alcohol Sensor
- 16x2 LCD Display
- Buzzer
- LEDs (optional)
- Resistors
- Breadboard
- Jumper Wires
- Power Supply

---

## 🧠 Working Principle
The MQ3 sensor is capable of detecting alcohol gas in the surrounding environment. It provides an analog output voltage based on the concentration of alcohol detected.

This analog signal is read by the Arduino through the analog input pin (A0). The Arduino processes this data and compares it with a predefined threshold value.

- If sensor value is below threshold → System remains in safe condition
- If sensor value exceeds threshold → Alcohol detected

When alcohol is detected:
- The buzzer is activated
- A warning message is displayed on the LCD screen

---

## 🔌 Circuit Diagram

![Circuit Diagram](images/circuit.jpg)

---

## 💻 Software & Tools Used
- Arduino IDE
- Embedded C Programming
- Serial Monitor (for debugging and testing)

---

## ▶️ How to Run the Project
1. Connect MQ3 alcohol sensor to Arduino analog pin (A0)
2. Connect LCD display to Arduino digital pins
3. Connect buzzer to a digital output pin
4. Upload the `.ino` code using Arduino IDE
5. Power ON the system
6. Bring alcohol source near the sensor
7. Observe LCD display and buzzer alert

---

## 🔍 Code Explanation
- `analogRead()` function reads sensor values
- Threshold value determines alcohol detection level
- If value exceeds threshold → buzzer ON
- LCD displays both sensor value and status message

---

## 🚀 Features
- Real-time alcohol detection
- LCD display for monitoring values
- Buzzer alert system
- Low-cost and simple design
- Easy to implement and maintain

---

## 📸 Project Output
> Upload your project image in `images/project.jpg`

![Project Output](images/project.jpg)

---

## 🛠️ Applications
- Drunk driving detection systems
- Industrial safety monitoring
- Breath analyzer devices
- Personal safety gadgets

---

## 🔮 Future Scope
- Integration with IoT for remote monitoring
- SMS alert using GSM module
- GPS tracking system
- Mobile application integration
- Data logging and cloud storage

---

## ⚠️ Limitations
- Sensor requires proper calibration
- May be affected by environmental gases
- Accuracy depends on setup conditions

---

## 👨‍💻 Author
**Ajay Sonawane**  
Electronics & Telecommunication Engineer  
Interested in IoT, Embedded Systems, and Automation

---

## 📌 Note
This project is developed for educational and demonstration purposes only.
