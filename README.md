# 🚀 In-Pipe Inspection Robot
A compact adaptive robotic system designed for inspection and navigation inside constrained pipe environments.

## 📌 Project Overview
This project presents the design and development of a compact, adaptive in-pipe inspection robot capable of operating within pipe diameters ranging from **50 mm to 90 mm**.

The system integrates **mechanical design, embedded control, and real-world testing** to achieve reliable locomotion inside constrained environments.

---

## 🎯 Key Highlights
- Adaptive chassis using **lead screw + scissor mechanism**
- Operates across **multiple pipe diameters**
- Embedded control using **Arduino Nano**
- Hybrid locomotion using **vibration motor**
- Fully designed, simulated, and prototyped

---

## 🧠 System Architecture

```
          +----------------------+
          |   Arduino Nano       |
          +----------+-----------+
                     |
          +----------v-----------+
          |  Motor Driver        |
          +----------+-----------+
                     |
     +---------------+----------------+
     |                                |
+----v-----+                    +-----v-----+
| DC Motor |                    | Vib Motor |
| (Lead    |                    | (Motion)  |
| Screw)   |                    +-----------+
+----------+
```

---

## ⚙️ Working Principle

### 1. Chassis Adaptation
- A **lead screw mechanism** converts rotational motion into linear motion  
- This drives an **X-shaped scissor structure**
- Enables expansion/contraction based on pipe diameter

### 2. Locomotion
- A **vibration motor** generates oscillatory motion
- Friction between robot and pipe wall produces forward movement

---

## 🏗️ Mechanical Design

- Scissor-based expansion mechanism
- Lead screw driven linear actuation
- Designed in **SolidWorks**
- 3D printed using **ABS material**
- Optimized for compactness and adaptability

---

## 🔌 Electronics & Control

| Component              | Function                          |
|----------------------|----------------------------------|
| Arduino Nano         | Main controller                  |
| TB6612FNG Driver     | Motor control                    |
| DC Geared Motor      | Chassis expansion                |
| Vibration Motor      | Robot locomotion                 |
| Encoder              | Position feedback                |

---

## 💻 Arduino Control Logic

```cpp
// Motor Pins
int motorA1 = 5;
int motorA2 = 6;

// Vibration motor pin
int vibMotor = 9;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(vibMotor, OUTPUT);
}

// Expand chassis
void expand() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
}

// Contract chassis
void contract() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
}

// Stop motor
void stopMotor() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
}

// Move forward using vibration
void moveForward() {
  digitalWrite(vibMotor, HIGH);
}

void loop() {
  expand();
  delay(3000);

  stopMotor();
  delay(1000);

  moveForward();
  delay(5000);
}
```

---

## 📊 Performance Results

- Successfully tested in:
  - 50 mm pipe
  - 60 mm pipe
  - 90 mm pipe

- Observations:
  - Higher speed in larger diameters
  - Reduced friction improves motion efficiency

- Measured Performance:
  - Expansion speed: ~2.33 mm/s
  - Contraction speed: ~2.55 mm/s

---

## 📷 Project Visuals

### 🔧 CAD Model
(Add images in `/images` and link here)

### 🔌 Circuit Design
(Add circuit diagrams here)

### 🤖 Prototype
(Add real robot photos here)

---

## 📁 Project Structure

```
in-pipe-inspection-robot/
│── README.md
│── docs/
│   └── project_report.pdf
│── src/
│   └── main.ino
│── images/
│── results/
```

---

## ⚠️ Limitations

- Wired system limits range
- Not suitable for curved/vertical pipes
- No inspection sensors integrated

---

## 🚀 Future Work

- Camera + sensor integration
- Wireless control system
- Autonomous navigation
- Improved mobility in complex pipe networks

---

## 📄 Documentation
Detailed report available in `/docs`

---

## 👨‍💻 Author
Harsh Sharma  
MSc Embedded Systems Engineering
