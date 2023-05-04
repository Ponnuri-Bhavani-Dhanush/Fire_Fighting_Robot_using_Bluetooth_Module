# Fire Fighting Robot using Bluetooth Module

This project is a fire fighting robot that can be controlled using a mobile app. The robot moves 360 degrees with the help of wheels and can be directed towards a fire by controlling it through the mobile app. Once it is in position, the robot can spray water on the fire by giving commands through the app.

## Hardware Requirements

- Arduino Uno
- Motor Driver Module (L293D)
- Bluetooth Module (HC-05)
- Fire Sensor
- Buzzer Module
- DC Motors (x2)
- Wheels (x2)
- Chassis
- Water Pump
- Pipes and Nozzles

## Software Requirements

- Arduino IDE
- Android Studio

## Circuit Diagram

![image](https://user-images.githubusercontent.com/111173151/236214514-a29b70cb-ed3c-4ea0-9c01-41e5e0e1fcd3.png)


## Installation

1. Download and install Arduino IDE on your computer.
2. Connect the components according to the circuit diagram.
3. Open the "fire_fighting_robot.ino" sketch in Arduino IDE.
4. Connect the Arduino Uno to your computer using a USB cable.
5. Select the board and port in the "Tools" menu of Arduino IDE.
6. Upload the sketch to the Arduino Uno.
7. Download and install the "Fire Fighting Robot" mobile app on your Android device.

## Usage

1. Turn on the robot and pair it with the Bluetooth module.
2. Open the "Fire Fighting Robot" mobile app on your Android device.
3. Connect to the Bluetooth module from the app.
4. Control the robot using the app to move it towards the fire.
5. When the robot is in position, use the app to activate the water pump and spray water on the fire.

## Troubleshooting

- If the robot is not responding to commands from the mobile app, check the Bluetooth module connection and pairing.
- If the robot is not moving or moving incorrectly, check the motor connections and wiring.
- If the ultrasonic sensor is not working properly, check the wiring and code for errors.

## Future Improvements

- Use machine learning algorithms to improve the robot's fire detection and extinguishing abilities.
- Implement autonomous operation with obstacle avoidance capabilities.
