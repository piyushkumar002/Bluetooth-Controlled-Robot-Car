# Bluetooth Controlled Robot Car

A Bluetooth-controlled robotic vehicle built using Arduino Uno, HC-05 Bluetooth module, and L298N motor driver.

The robot receives commands from a smartphone through a Bluetooth Serial application. The Arduino processes these commands and controls the motors via the L298N motor driver. PWM is used to implement variable speed control.

## Features

* Wireless Bluetooth Control
* Forward and Reverse Motion
* Left and Right Steering
* PWM-based Speed Control
* Real-time Command Processing

## Hardware Used

| Component              | Quantity    |
| ---------------------- | ----------- |
| Arduino Uno            | 1           |
| HC-05 Bluetooth Module | 1           |
| L298N Motor Driver     | 1           |
| DC Motors              | 2           |
| Chassis                | 1           |
| Battery Pack           | 1           |
| Jumper Wires           | As Required |

## System Architecture

Bluetooth Serial App
↓
HC-05 Bluetooth Module
↓
Arduino Uno
↓
L298N Motor Driver
↓
DC Motors

## Technologies

* Arduino C/C++
* Serial Communication
* PWM Control
* Embedded Systems

## Demo

[https://youtu.be/J0IgiiHNZW8]

## Future Improvements

* Obstacle Avoidance
* ROS2 Integration
* Voice Control
* Autonomous Navigation

## Author

Piyush Kumar
