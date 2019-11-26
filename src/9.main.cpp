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
  int8_t coefficient = 50;
  bool led_state = false;
  while(1) {
    if (Serial.available() > 0) {
      char rcv_char = Serial.read();
      switch (rcv_char) {
        case 'i':
        case 'I':
          coefficient += 10;
          break;
        case 'd':
        case 'D':
          coefficient -= 10;
          break;
        case 'm':
        case 'M':
          coefficient = 100;
        case 'a':
        case 'A':
          led_state = true;
          break;
        case 'e':
        case 'E':
          led_state = false;
          break;
        default:
          Serial.print("Erreur - '");
          Serial.print(rcv_char);
          Serial.println("' n'est pas autorisé");
      }
      if (coefficient > 100) {
        coefficient = 100;
      } else if (coefficient < 0) {
        coefficient = 0;
      }
      
      if (led_state == true) {
        analogWrite(D13, 256*coefficient/100);
      } else {
        analogWrite(D13, 0);
      }
    }
  }
}
*/