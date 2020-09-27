#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

int ambLightADC = 0;
double ambLight = 0; 
void ambLight_function();
void dht_function();

const int ambLight_pin = 0;

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  Serial.begin(115200);
  pinMode(ambLight_pin,INPUT);
  dht.begin(); 
}

void loop() 
{
  delay(3000);
  ambLight_function();
  dht_function(); 
}

void ambLight_function(){
  ambLightADC = analogRead(ambLight_pin);
  ambLight = (ambLightADC * 3.3 ) / (4095);
  Serial.println("ambLight: "+ String(ambLight));
  }

  void dht_function(){
    // read humidity
    float h = dht.readHumidity();
    // Read temperature as Celsius 
    float t = dht.readTemperature();
    // Read temperature as Fahrenheit
    float f = dht.readTemperature(true);
    
    if (isnan(h) || isnan(t) || isnan(f)) {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }
      Serial.println("Humidity:"+String(h));
      Serial.println("Temperature C:"+ String(t));
      Serial.println("Temperature f:"+String(f));
  }
