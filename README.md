# offline-voice-servo-
Offline Turkish voice-controlled servo motor system using Python (VOSK) and NodeMCU (ESP8266)

# 🗣️ Offline Voice-Controlled Servo System (Python + VOSK + NodeMCU)

This project allows you to control a **servo motor** connected to a **NodeMCU (ESP8266)** using **Turkish voice commands**, completely offline.  
Voice recognition is handled through the **VOSK API**, and commands are transmitted to NodeMCU via **USB serial communication**.

---

## 🎯 Features

- ✅ Offline voice recognition (no internet needed)
- ✅ Turkish command support (`sağ` = right, `sol` = left)
- ✅ Servo control via NodeMCU (ESP8266)
- ✅ Simple setup and open-source
- ✅ Uses Python for voice processing

---

## 🛠️ Hardware Requirements

| Component     | Description                          |
|--------------|--------------------------------------|
| 🔌 NodeMCU    | ESP8266-based development board      |
| ⚙️ Servo      | SG90 or similar                      |
| 🎤 Microphone | Connected to the PC                  |
| 🔋 Power (opt.)| 5V external adapter for servo (optional but recommended) |

---

## 🔧 Circuit Diagram

| Servo Wire     | NodeMCU Connection     |
|----------------|------------------------|
| Red (VCC)      | 5V (Vin or external)   |
| Brown/Black (GND) | GND               |
| Orange (Signal) | D4 (GPIO2)            |

---

## 💻 Software Requirements

Install Python dependencies with:

```bash
pip install vosk sounddevice pyserial
```

Download the Turkish voice model from:
📦 https://alphacephei.com/vosk/models
Recommended: vosk-model-small-tr-0.3

🔊 Supported Commands
Voice Command	Action
sağ	Servo rotates to 180° (right)
sol	Servo rotates to 0° (left)

⚙️ How It Works
Python listens to the microphone using the VOSK API.

Recognized text is parsed for keywords (sağ, sol).

Matching command is sent to NodeMCU via USB serial.
<br>

Download the Turkish voice model from:

📦 https://alphacephei.com/vosk/models

Recommended: vosk-model-small-tr-0.3

<br>
🔊 Supported Voice Commands
Command	Action
sağ	Rotate servo to 180°
sol	Rotate servo to 0°
