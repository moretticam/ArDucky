/*
   =========================================================
     Copyright (c) 2019 moretticam, (Licensed under MIT)
    For more information see: github.com/moretticam/arducky
   =========================================================

   Configuration.h

   You can use the RF-Transmitter with a Dip-Switch and supports a maxiumum of 8 slots.
   You can also disable this feature by setting N_DIP to 0 (you will also need to set PAYLOAD_NAME to an script name)

   
*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define PAYLOAD_NAME "default" // Payload Name if Dip-Switch enabled
#define RF_PIN 4 // RF data pin
#define RF_FREQUENCY 2000 // RF frequency

// Dip-Switch pins
#define N_DIP 8 // Number of switches, 0 for non Dip-Switch
#define DIP_1 12
#define DIP_2 11
#define DIP_3 10
#define DIP_4 9
#define DIP_5 8
#define DIP_6 7
#define DIP_7 6
#define DIP_8 5

#define LED_PIN 3
#define BUTTON_PIN 2 // Send Button Pin


#endif // CONFIGURATION_H
