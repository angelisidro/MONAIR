// Revisar funciones https://github.com/STEMpedia/Dabble/blob/master/src/Dabble.cpp

#define CUSTOM_SETTINGS
#define INCLUDE_TERMINAL_MODULE
#include <DabbleESP32.h>
String Serialdata = "";
String ssid = "";
int dataflag = 2;
void setup() {
  Serial.begin(115200);       // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("MONAIR_1");    //set bluetooth name of your device
  
}

void loop() {
  
 Dabble.processInput();
 
 if((Dabble.isAppConnected() == 1 ) && (dataflag ==2)){
   Terminal.print("Bienvenido a la configuración de la estación MONAIR");

   dataflag = 1;
 }



}
