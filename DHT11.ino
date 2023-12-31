#include "DHT.h"
#define DHTPIN A1 // pino que estamos conectados
#define DHTTYPE DHT11 // DHT 11
DHT dht(DHTPIN, DHTTYPE);
void setup(){
Serial.begin(9600);
Serial.println("DHTxx test!");
dht.begin();
}
void loop(){
float h = dht.readHumidity();
float t = dht.readTemperature();
// testa se retorno é valido, caso contrário algo está errado.
if (isnan(t) || isnan(h)) {
Serial.println("Failed to read from DHT");
}
else{
Serial.print("Umidade: ");
Serial.print(h);
Serial.print(" %t");
Serial.print("Temperatura: ");
Serial.print(t);
Serial.println(" *C");
}
}