// Ajout de bibliothèques, prévient le compilateur que l'on va utiliser
// des fonctions décrites ailleurs
#include <Arduino.h>
/*
const PinMap PinMap_DAC[] = {};

void setup() {
  Serial.begin(115200);
  Serial.print("Start\n");
  // Initialisation, appelé une fois
  // Généralement pour déclarer les I/O
  pinMode(D13, OUTPUT);
}

void loop() {
  // Déclare et initialise des variables
  while(1) {
    if (Serial.available() > 0) {
      uint8_t rcv_char = Serial.read();
      if (rcv_char == 'A') {
        digitalWrite(D13, true);
      } else if (rcv_char == 'E') {
        digitalWrite(D13, false);
      } else {
        Serial.print("Erreur - Valeurs autorisées: 'A' ou 'E'\n");
      }
    }
  }
}
*/