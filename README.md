# Arduino Environmental Monitoring System

## Overview
This Arduino project aims to monitor various environmental parameters using sensors and send the data over Bluetooth for remote monitoring. It integrates a DHT11 sensor for temperature and humidity readings, an MQ-7 sensor for detecting carbon monoxide (CO) levels, and a GP2Y1010AU0F sensor for measuring dust density in the air. The collected data is transmitted wirelessly via Bluetooth to a connected device for real-time monitoring and analysis.

## Features
- Temperature and Humidity Monitoring: Utilizes the DHT11 sensor to measure ambient temperature and humidity levels.
- CO Detection: Uses the MQ-7 sensor to monitor carbon monoxide (CO) levels in the air.
- Dust Density Measurement: Incorporates the GP2Y1010AU0F sensor for calculating dust density based on voltage measurements.
- Bluetooth Communication: Sends sensor readings wirelessly to a Bluetooth-enabled device for remote monitoring and data logging.
- LED Indication: Provides visual indication of sensor operation and status using onboard LEDs.

## Components Used
- Arduino UNO: Controls the entire system and interfaces with multiple sensors.
- DHT11 Sensor: Measures temperature and humidity.
- MQ-7 Sensor: Detects CO gas concentration.
- GP2Y1010AU0F Sensor: Measures dust density in the air.
- Bluetooth Module: Enables wireless communication for data transmission.
- LEDs and Resistors: Provides visual feedback and necessary circuitry for sensor operation.

## Setup and Usage
To use the environmental monitoring system:

1. Hardware Setup: Connect the sensors as per the defined pin configurations in the code.
2. Software Configuration: Upload the provided Arduino sketch to the Arduino board using the Arduino IDE.
3. Bluetooth Connection: Pair the Arduino with a Bluetooth-enabled device (e.g., smartphone, laptop).
4. Monitoring: Use a Bluetooth serial monitor app on the connected device to view real-time sensor data including temperature, humidity, dust density, CO levels, and air quality index.

## Future Improvements
- Implement data logging to an SD card for extended monitoring periods.
- Enhance sensor calibration routines for improved accuracy.
- Develop a user interface for displaying and analyzing historical sensor data.
- Incorporate alarm systems based on threshold values for critical environmental parameters.
