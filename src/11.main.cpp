// Ajout de bibliothèques, prévient le compilateur que l'on va utiliser
// des fonctions décrites ailleurs
#include <Arduino.h>

#define BUTTON PC13

volatile bool button_pushed = false;

void button_pushed_isr() {
  button_pushed = true;
}

void setup() {
  Serial.begin(115200);
  Serial.print("Start\n");
  // Initialisation, appelé une fois
  // Généralement pour déclarer les I/O
  pinMode(D13, OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(BUTTON, button_pushed_isr, FALLING);
}

void loop() {
  // Déclare et initialise des variables
  
  while(1) {
    if (button_pushed == true) {
      button_pushed = false;
      digitalToggle(D13);
    }
  }
}