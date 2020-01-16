/*
 * =========================================================
 *   Copyright (c) 2019 moretticam, (Licensed under MIT)
 *  For more information see: github.com/moretticam/arducky-remote
 * =========================================================
 *
 * Configuration.h
 *
 * Define pins, name files and keyboard layout
 *
 * Pins for ProMicro:
 * pin A0 for button
 * pin 10 for microSD adapter
 * pin 2 to 9 for dip switch
 * pin A1 for led diode
 *
 * Available layouts:
 * en_US
 * en_UK
 * de_DE
 * fr_FR
 * be_BE
 * es_ES
 * fi_FI
 * cs_CZ_QWERTZ
 * cs_CZ_QWERTY
 * da_DK
 * pt_BR
 * pt_PT
 * tr_TR
 * it_IT
 * sv_SE
 * sample - with this you can create your own layout
 *
 */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define en_US // Define layout

#define DEBUG true // Enable debug
#define LOG true // Enable log file

#define SCRIPT_NAME "script" // Script filename if not dip-switch available. Don't put the extension (.txt)
#define LOG_NAME "arducky.log" // Log filename


#define SDCARD_CS 10 // Chip-Select of the SD-Card reader
#define LED LED_BUILTIN // Led pin

#define REMOTE 1 // Available remotes: 0 (no remote), 1 (RF)

#endif // CONFIGURATION_H
