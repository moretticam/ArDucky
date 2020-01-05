#include <VirtualWire.h>
String Payload; 
bool InsertName = false;  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT); 
pinMode(2, INPUT);
vw_set_tx_pin(8);
vw_setup(2000);

}

void loop() {
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
    if(digitalRead(2)){
      Serial.println("Sending name..."); 
      char filename[Payload.length()];
      Payload.toCharArray(filename, sizeof(filename));
      Serial.println(filename); 
      send(filename);
      for(int i = 1; i < 100; i++){
        send(filename);
        delay(50); 
        }
      delay(1000);
      Serial.println("done!");
      serialFlush();
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
