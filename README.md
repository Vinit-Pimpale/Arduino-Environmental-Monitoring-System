# Arduino Environmental Monitoring System

This repository contains an **Arduino-based Environmental Monitoring System** designed to measure and report key environmental parameters using low-cost sensors. The system collects data related to **temperature, humidity, air quality (CO gas), and dust concentration**, and transmits the information via **Bluetooth** for remote monitoring.

The project demonstrates practical embedded systems concepts including sensor interfacing, analog signal processing, serial communication, and modular Arduino software design.

---

## 1. Project Motivation and Objectives

Environmental monitoring is critical for understanding air quality and indoor conditions, particularly in urban and industrial environments. This project was developed to explore how multiple heterogeneous sensors can be integrated into a single embedded platform for real-time environmental data acquisition.

The primary objectives of this project are:

- Measure temperature and humidity using a digital sensor
- Detect carbon monoxide (CO) gas concentration
- Estimate dust density in the surrounding air
- Transmit sensor readings wirelessly via Bluetooth
- Design a clear, maintainable Arduino codebase suitable for extension

---

## 2. System Overview

The system is built around an Arduino microcontroller connected to multiple sensors. Each sensor measures a specific environmental parameter and reports data either through analog or digital interfaces. The Arduino periodically reads sensor values, processes them, and sends formatted data over a Bluetooth serial connection.

Measured parameters include:
- Temperature (°C)
- Relative Humidity (%)
- Carbon Monoxide (CO) level
- Dust concentration

---

## 3. Hardware Components

The following components are required to build the system:

| Component | Description |
|----------|-------------|
| **Arduino UNO** | Microcontroller responsible for sensor acquisition and data processing |
| **DHT11 Sensor** | Digital sensor used to measure temperature and relative humidity |
| **MQ-7 Gas Sensor** | Analog gas sensor used to detect carbon monoxide concentration |
| **GP2Y1010AU0F Dust Sensor** | Optical sensor used to estimate dust density in air |
| **Bluetooth Module (HC-05/HC-06)** | Wireless module used to transmit sensor data |
| **Resistors** | Passive components used for signal conditioning and sensor interfacing |
| **Breadboard** | Prototyping platform for temporary circuit assembly |
| **Jumper Wires** | Conductive wires used to connect components |
| **Power Supply / USB** | Provides power to the Arduino and sensors |

---

## 4. Sensor Interfaces and Electrical Design

### DHT11 Sensor
- Uses a single-wire digital communication protocol
- Provides calibrated temperature and humidity data
- Requires a pull-up resistor on the data line

### MQ-7 Gas Sensor
- Operates as an analog sensor
- Outputs voltage proportional to CO concentration
- Requires a preheating period for stable readings

### GP2Y1010AU0F Dust Sensor
- Uses an IR LED and photodiode to detect dust particles
- Requires precise timing of LED activation and ADC sampling
- Outputs an analog voltage related to dust density

### Bluetooth Module
- Communicates using UART serial protocol
- Enables wireless data transmission to a PC or smartphone

---

## 5. Software Architecture

The Arduino software is implemented as a single sketch with a modular structure.

### Main Functional Blocks

1. **Initialization**
   - Sensor and library initialization
   - Serial and Bluetooth communication setup

2. **Sensor Acquisition**
   - Periodic reading of DHT11 data
   - Analog sampling from MQ-7 and dust sensor

3. **Data Processing**
   - Conversion of raw ADC values to physical units
   - Basic validation of sensor readings

4. **Data Transmission**
   - Formatting sensor values into readable strings
   - Sending data over Bluetooth serial interface

---

## 6. Data Output Format

Sensor readings are transmitted as human-readable text strings. A typical output includes:

- Temperature in degrees Celsius
- Relative humidity in percent
- CO gas level (relative or calibrated units)
- Dust density estimation

The output format can be parsed easily by external applications or mobile devices.

---

## 7. Calibration and Testing

Accurate environmental measurement requires calibration:

- **DHT11**: Factory calibrated, limited accuracy
- **MQ-7**: Requires baseline calibration in clean air
- **Dust Sensor**: Sensitive to ambient light and airflow

Calibration should be performed in controlled conditions for reliable results.

---

## 8. Repository Structure

```text
Arduino-Environmental-Monitoring-System/
├── Arduino_Environmental_Monitoring_System.ino   # Main Arduino sketch
├── README.md                                     # Project documentation
```

---

## 9. Usage Instructions

1. Open the Arduino IDE.
2. Load `Arduino_Environmental_Monitoring_System.ino`.
3. Connect the Arduino board and select the correct port.
4. Upload the sketch.
5. Power the system and connect to the Bluetooth module.
6. Observe environmental data on the connected device.

---

## 10. Software Engineering Practices

This project emphasizes:
- Clear separation of sensor reading logic
- Meaningful variable and function naming
- Use of constants for calibration parameters
- Deterministic program flow
- Readable and maintainable code structure

---

## 11. Limitations

- Sensor accuracy is limited by low-cost hardware
- Gas sensor requires long warm-up time
- No onboard data logging
- Bluetooth communication is unsecured

---

## 12. Future Extensions

Potential improvements include:
- Data logging to SD card
- Cloud integration via IoT platforms
- Mobile application for visualization
- Additional environmental sensors
- Alarm thresholds and alerts

---

## 13. Author

**Vinit Pimpale**

This project was developed as part of an exploration into embedded systems and environmental sensing using Arduino.
