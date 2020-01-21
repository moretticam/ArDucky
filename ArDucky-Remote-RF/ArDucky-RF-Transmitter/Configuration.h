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

#define BUTTON_PIN 2 // Send Button Pin

#define DEBUG true // Enable debug

#define REMOTE 1 // Available remotes: 0 (no remote), 1 (RF)

#define SERIAL_INTERFACE true // Interface for the plotter, if false select name of payload
#define PAYLOAD_NAME "default" // Payload Name if SERIALINTERFACE = false

#define RF_PIN 8 // RF data pin
#define RF_FREQUENCY 2000 // RF frequency

#define SERIAL_FLUSH true// Enable Serial Read cleanup

#endif // CONFIGURATION_H
