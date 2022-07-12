//Tech Trends Shameer
//Control LED Using Blynk 2.0/Blynk IOT
#define BLYNK_TEMPLATE_ID "TMPLlCBSlJ8m"
#define BLYNK_DEVICE_NAME "IOT"
#define BLYNK_AUTH_TOKEN "your token"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "RAN-2GHz";  // Enter your Wifi Username
char pass[] = "PR4B1DH1-2";  // Enter your Wifi password

int ledpin = 5;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
