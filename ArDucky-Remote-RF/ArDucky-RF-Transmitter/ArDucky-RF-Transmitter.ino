/*
 * =========================================================
 *   Copyright (c) 2019 moretticam, (Licensed under MIT)
 *  For more information see: github.com/moretticam/arducky
 * =========================================================
 * 
 */

#include <VirtualWire.h>
#include "Configuration.h"

String Payload; 
bool InsertName = false;  

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
switch(REMOTE){
  case 1:{
    vw_set_tx_pin(RF_PIN);
    vw_setup(RF_FREQUENCY);
    }
    break;  
  }
}

void loop() {
    if(SERIAL_INTERFACE){   
    if(InsertName == false){
      delay(500); 
      Serial.print("Insert the name of the payload: ");
      while(!Serial.available());
      Payload = Serial.readString();
      Serial.println(Payload);  
      delay(100);
      Serial.println("Push the send button for a while");
      InsertName=true;
      }
    }
    else{
      Payload = PAYLOAD_NAME;
      delay(200); 
      }
    if(digitalRead(2)){
      Serial.println("Sending name..."); 
      char filename[Payload.length()];
      Payload.toCharArray(filename, sizeof(filename));
      Serial.println(filename); 
      send(filename);
      for(int i = 1; i < 80; i++){
        send(filename);
        delay(50); 
        }
      delay(1000);
      Serial.println("done!");
      if(SERIAL_FLUSH){serialFlush();}
      InsertName=false;  
      delay(2000);
    }
}

void send (char *msg) {
  vw_send((uint8_t *)msg,strlen(msg));
  vw_wait_tx();
  }

void serialFlush(){
  while(Serial.available() > 0) {
    char t = Serial.read();
  }
}   
