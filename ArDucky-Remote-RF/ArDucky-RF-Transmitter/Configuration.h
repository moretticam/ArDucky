/*
   =========================================================
     Copyright (c) 2019 moretticam, (Licensed under MIT)
    For more information see: github.com/moretticam/arducky
   =========================================================

   Configuration.h

   sample - with this you can create your own layout

   Avaliable remotes: 
   0 - Default, none
   1 - RF
   
*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H


#define DEBUG true // Enable debug

#define PAYLOAD_NAME "default" // Payload Name if SERIALINTERFACE = false

#define RF_PIN 4 // RF data pin
#define RF_FREQUENCY 2000 // RF frequency

// Dip-Switch pins
#define N_DIP 8 // Number of switches
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
