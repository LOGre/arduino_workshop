// Ajout de bibliothèques, prévient le compilateur que l'on va utiliser
// des fonctions décrites ailleurs
#include <Arduino.h>

#define BUTTON PC13

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
  bool button_state = false;
  while(1) {
    button_state = digitalRead(BUTTON);
    if (button_state == true) {
      digitalWrite(D13, false);
    } else {
      digitalWrite(D13, true);
    }
  }
}