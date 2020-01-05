/*
   =========================================================
     Copyright (c) 2018 toolsprods, (Licensed under MIT)
    For more information see: github.com/toolsprods/arducky
   =========================================================

   Configuration.h

   Define pins, name files and keyboard layout

   Usually pins:
   pin 3 for button
   pin 4 for microSD adapter
   pin 5 to 12 for dip switch
   pin 13 for led diode

   Available layouts:
   en_US
   en_UK
   de_DE
   fr_FR
   be_BE
   es_ES
   fi_FI
   cs_CZ_QWERTZ
   cs_CZ_QWERTY
   da_DK
   pt_BR
   pt_PT
   tr_TR
   it_IT
   sv_SE

   sample - with this you can create your own layout

   Avaliable remotes: 
   0 - Default, none
   1 - RF
   
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define es_ES // Define layout

#define DEBUG true // Enable debug
#define LOG true // Enable log file

#define SCRIPT_NAME "script" // Script name when there is no remote
#define LOG_NAME "arducky.log" // Log filename

#define SDCARD_CS SS // Chip-Select of the SD-Card reader
#define LED LED_BUILTIN // Led pin

#define REMOTE 1 // Available remotes: 0 (no remote), 1 (RF)
#endif // CONFIGURATION_H
