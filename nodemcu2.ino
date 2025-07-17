#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(2); // GPIO2 (D4)
  servo.write(90); // Başlangıç orta konum
}

void loop() {
  if (Serial.available()) {
    String komut = Serial.readStringUntil('\n');
    komut.trim();

    if (komut == "sag") {
      servo.write(180);
      Serial.println("Servo sağa döndü");
    } else if (komut == "sol") {
      servo.write(0);
      Serial.println("Servo sola döndü");
    }
  }
}
