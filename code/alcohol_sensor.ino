#include <LiquidCrystal.h>

// LCD pin configuration (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Pin definitions
#define SENSOR_PIN A0
#define BUZZER_PIN 6
#define LED_PIN 5

// Threshold level for alcohol detection
#define THRESHOLD 400

// Function prototypes
void initializeSystem();
void readSensor();
void displayData(int value, float voltage);
void alertSystem(int value);

// Global variables
int sensorValue = 0;
float voltage = 0.0;

void setup() {
    initializeSystem();
}

void loop() {
    readSensor();
    displayData(sensorValue, voltage);
    alertSystem(sensorValue);
    delay(500);
}

// Initialize LCD and pins
void initializeSystem() {
    lcd.begin(16, 2);
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(LED_PIN, OUTPUT);

    lcd.setCursor(0, 0);
    lcd.print("Alcohol Detector");
    lcd.setCursor(0, 1);
    lcd.print("Initializing...");
    delay(3000);
    lcd.clear();
}

// Read MQ3 sensor value
void readSensor() {
    sensorValue = analogRead(SENSOR_PIN);
    voltage = sensorValue * (5.0 / 1023.0);
}

// Display data on LCD
void displayData(int value, float voltage) {
    lcd.setCursor(0, 0);
    lcd.print("Val:");
    lcd.print(value);
    lcd.print("   ");

    lcd.setCursor(10, 0);
    lcd.print("V:");
    lcd.print(voltage, 2);
}

// Alert logic
void alertSystem(int value) {
    if (value > THRESHOLD) {
        digitalWrite(BUZZER_PIN, HIGH);
        digitalWrite(LED_PIN, HIGH);

        lcd.setCursor(0, 1);
        lcd.print("ALCOHOL ALERT!! ");
    } else {
        digitalWrite(BUZZER_PIN, LOW);
        digitalWrite(LED_PIN, LOW);

        lcd.setCursor(0, 1);
        lcd.print("Status: SAFE    ");
    }
}
