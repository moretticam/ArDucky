/*
   =========================================================
     Copyright (c) 2019 moretticam, (Licensed under MIT)
    For more information see: github.com/moretticam/arducky
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
   0 - Default, none (SELECT FOR DIP USE)
   1 - RF
   
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define es_ES // Define layout

#define DEBUG true // Enable debug
#define LOG true // Enable log file

#define SCRIPT_NAME "script" // Script filename when there is no remote/dip-switch selected. DON'T put the extension (.txt)
#define LOG_NAME "arducky.log" // Log filename

#define SDCARD_CS SS // Chip-Select of the SD-Card reader
#define LED LED_BUILTIN // Led pin

#define REMOTE 2 // Available remotes: 0 (no remote), 1 (RF), 2 (RFID)

// When no remote selected (0):
#define BUTTON_EXECUTE 3 // Button pin, put 0 for not dip-switch
// Dip-Switch pins
#define N_DIP 8 // Number of switches, put 0 for not dip-switch
#define DIP_1 12
#define DIP_2 11
#define DIP_3 10
#define DIP_4 9
#define DIP_5 8
#define DIP_6 7
#define DIP_7 6
#define DIP_8 5

// When RF selected (1):
#define RECEIVER_DATA 8 // Data pin of the RF-Receiver

// When RFID selected (2):
#define RFID_SS 10 // SDA of the PN532

#endif // CONFIGURATION_H
