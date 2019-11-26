// Ajout de bibliothèques, prévient le compilateur que l'on va utiliser
// des fonctions décrites ailleurs
#include <Arduino.h>

#define BUTTON PC13

const PinMap PinMap_DAC[] = {};

void setup() {
  Serial.begin(115200);
  Serial.print("Start\n");
  // Initialisation, appelé une fois
  // Généralement pour déclarer les I/O
  pinMode(D13, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // Déclare et initialise des variables
  int8_t coefficient = 50;
  bool led_state = false;
  while(1) {
    digitalWrite(D13, digitalRead(BUTTON));
  }
}