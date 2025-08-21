# Mr. Stabby Bot

A meme-inspired Arduino project that brings a maniacal robot arm to life, controlled by two separate Arduino controllers.

## 📁 Repository Contents

* `mrStabbyBotArm.ino`: The code for the **arm controller**. This sketch manages the four servos responsible for the fluid stabbing motion.

* `mrStabbyBotBase.ino`: The code for the **base controller**. This sketch controls the two servos on the base that dictate the direction of the "maniacal" waving motion.

## ✨ Features

* **Fluid Motion**: The arm code uses the `VarSpeedServo` library for smooth, non-jerky movements.

* **Maniacal Waving**: The base code executes a rapid, back-and-forth motion to emulate the "maniacal" waving of the Futurama robot.

* **Modular Design**: The project is split into two separate, dedicated controllers for easier debugging and a clearer separation of concerns.

## 🤖 Hardware Requirements

* **Two Arduino Boards**: We recommend two Arduino UNOs or similar.

* **Six Servo Motors**: Four for the arm, two for the base.

* **Wiring**: Wires to connect the servos to the Arduino boards.

## 🔌 Wiring Diagram

### `mrStabbyBotArm.ino`

Connect four servos to the following digital pins:

* **Servo 1 (Shoulder Pan)**: Pin 3

* **Servo 2 (Shoulder Tilt)**: Pin 5

* **Servo 3 (Elbow)**: Pin 6

* **Servo 4 (Wrist)**: Pin 9

### `mrStabbyBotBase.ino`

Connect two servos to the following digital pins:

* **Servo 1 (Base Pan)**: Pin 3

* **Servo 2 (Base Tilt)**: Pin 5

## 🔧 How to Use

1. **Install the Library**: Ensure you have the `VarSpeedServo` library installed in your Arduino IDE. You can find it in the Library Manager.

2. **Upload the Code**: Upload `mrStabbyBotArm.ino` to your first Arduino board and `mrStabbyBotBase.ino` to your second board.

3. **Power Up**: Power both Arduino boards. The robot arm should now perform its maniacal stabbing motions.

## 📝 Troubleshooting

* **Jerky Movement**: Double-check that you have the `VarSpeedServo` library installed correctly.

* **Servos Not Responding**: Make sure your servos are properly powered, and all wiring connections are secure.

## 🖼️ Inspiration

This project is a tribute to the "Stabby Bot" from the animated series *Futurama*.
