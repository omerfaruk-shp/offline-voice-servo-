# 🗣️ Offline Voice-Controlled Servo System (Python + VOSK + NodeMCU)

This project allows you to control a **servo motor** connected to a **NodeMCU (ESP8266)** using **Turkish voice commands**, completely offline.  
Voice recognition is handled through the **VOSK API**, and commands are transmitted to NodeMCU via **USB serial communication**.

---

## 🚀 Features

- ✅ Offline voice recognition (no internet required)
- ✅ Turkish command support (`sağ`, `sol`)
- ✅ USB serial communication with NodeMCU
- ✅ Servo motor control (SG90 or compatible)
- ✅ Python + Arduino code provided

---

## 🛠️ Hardware Requirements

| Component     | Description                          |
|---------------|--------------------------------------|
| 🔌 NodeMCU     | ESP8266-based microcontroller board  |
| ⚙️ Servo Motor | SG90 or similar micro servo          |
| 🎤 Microphone  | Any PC-compatible microphone         |
| 🔋 (Optional)  | 5V adapter for servo power supply    |

---

## 🔧 Circuit Diagram

| Servo Wire     | NodeMCU Connection     |
|----------------|------------------------|
| Red (VCC)      | Vin (or external 5V)   |
| Brown/Black (GND) | GND               |
| Orange (Signal) | D4 (GPIO2)            |

---

## 💻 Software Requirements

Install Python dependencies:

```bash
pip install vosk sounddevice pyserial
```

Download the Turkish VOSK model:  
📦 https://alphacephei.com/vosk/models → `vosk-model-small-tr-0.3.zip`  
Unzip and place it in the same directory as the Python script.

---

## 📁 Project Structure

```
project-folder/
├── voice_control.py              # Python voice recognition script
├── nodemcu-servo.ino             # Arduino sketch for NodeMCU + servo
└── vosk-model-small-tr-0.3/      # Extracted VOSK Turkish model
    ├── am/
    ├── conf/
    ├── model.conf
    └── ...
```

---

## 🔊 Supported Voice Commands

| Command | Action                 |
|---------|------------------------|
| `motor sağa dön`   | Rotate servo to 180°   |
| `motor sola dön`   | Rotate servo to 0°     |

---

## 🧠 How It Works

1. `voice_control.py` listens to microphone input using VOSK.
2. If `"sağ"` or `"sol"` is recognized, it sends `"motor sağa dön"` or `"motor sola dön"` to NodeMCU over serial.
3. NodeMCU receives the command and moves the servo accordingly.

---

---

## 🔮 Future Improvements

- [ ] Add "center" voice command
- [ ] ESP32 + onboard microphone for standalone use
- [ ] GUI interface for testing / debugging

---

## 👤 Author

**Ömer Faruk Boz**  
Arduino, Python, and Cybersecurity Developer  
🔗 GitHub: [omerfaruk-shp](https://github.com/omerfaruk-shp)

---

## 📄 License

This project is licensed under the MIT License.  
Use it freely, modify, and share with credit.
