/*
   =========================================================
     Copyright (c) 2019 moretticam, (Licensed under MIT)
    For more information see: github.com/moretticam/arducky
   =========================================================

*/

#include <VirtualWire.h>
#include "Configuration.h"

char scriptName;


void setup() {
  vw_set_tx_pin(RF_PIN);
  vw_setup(RF_FREQUENCY);
}

void loop() {
  if (digitalRead(2)) {
    if (N_DIP >= 1) {
      if (digitalRead(DIP_1) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    } 

    if (N_DIP >= 2) {
      if (digitalRead(DIP_2) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 3) {
      if (digitalRead(DIP_3) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 4) {
      if (digitalRead(DIP_4) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 5) {
      if (digitalRead(DIP_5) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 6) {
      if (digitalRead(DIP_6) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 7) {
      if (digitalRead(DIP_7) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }

    if (N_DIP >= 8) {
      if (digitalRead(DIP_8) == LOW) {
        scriptName += '1';
      } else {
        scriptName += '0';
      }
    }
    send(scriptName);
    while (digitalRead(2)) {
      digitalWrite(3, HIGH);
    }
    delay(1000);
  }
}

void send (char *msg) {
  vw_send((uint8_t *)msg, strlen(msg));
  vw_wait_tx();
}
