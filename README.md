**Updated README with project details**# In-Pipe Inspection Robot

## 📌 Overview
This project focuses on the design and development of a compact in-pipe inspection robot capable of navigating pipes with varying diameters (50 mm to 90 mm).

The robot incorporates an automated chassis mechanism that allows expansion and contraction using a lead screw-driven system. A vibration motor enables propulsion, allowing the robot to move through pipes efficiently.

---

## 🎯 Aim
To design, build, and test a propulsion-based in-pipe robot with an automated chassis capable of adapting to multiple pipe diameters.

---

## ✅ Objectives
- Design a 3D model using SolidWorks
- Develop an automated chassis mechanism
- Implement embedded control using Arduino Nano
- Integrate motors, encoder, and motor driver
- Evaluate performance in different pipe diameters

---

## ⚙️ System Components
- Arduino Nano (ATmega328P)
- TB6612FNG Motor Driver
- Micro Metal DC Motor (Lead Screw Actuation)
- Vibration Motor (Locomotion)
- Rotary Encoder (Position Feedback)
- Power Supply

---

## 🧠 Working Principle
The robot uses a lead screw mechanism driven by a DC motor to expand and contract its chassis. This creates an umbrella-like X-shaped scissor mechanism that adapts to pipe diameters.

A vibration motor generates oscillations, enabling forward movement inside the pipe.

---

## 🏗️ Mechanical Design
- X-shaped scissor mechanism for expansion/contraction
- Lead screw converts rotational motion to linear motion
- 3D printed parts (ABS material)
- Compact and lightweight design

---

## 🔌 Electronics & Control
- Arduino Nano controls motor operations
- Motor driver regulates speed and direction
- Encoder provides feedback for precise positioning
- Circuit simulated using Tinkercad before implementation

---

## 📊 Results
- Successfully navigated pipes of 50 mm, 60 mm, and 90 mm
- Higher speed observed in larger diameters due to reduced friction
- Maximum expansion speed: ~2.33 mm/s
- Maximum contraction speed: ~2.55 mm/s

---

## ⚠️ Limitations
- Wired configuration limits mobility
- Cannot operate in curved or vertical pipes
- No inspection sensors (camera, gas, ultrasonic)

---

## 🚀 Future Improvements
- Add sensors for inspection (camera, gas, ultrasonic)
- Wireless control (WiFi/Bluetooth)
- Improve navigation in curved pipes
- Add bidirectional movement

---

## 📄 Documentation
Full project report available in `/docs`.

---

## 👨‍💻 Author
Harsh Sharma
