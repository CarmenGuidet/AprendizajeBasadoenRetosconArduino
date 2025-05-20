#include <DHT11.h>

DHT11 dht11(17);  // Crear un objeto DHT11 usando el pin digital 17

void setup() {
    // Iniciar la comunicación serie a 9600 baudios
    Serial.begin(9600); 

}

void loop() {
    int temperature = 0;
    int humidity = 0;

    // Leer temperatura y humedad del sensor DHT11
    int result = dht11.readTemperatureHumidity(temperature, humidity);

    // Si la lectura fue exitosa, mostramos los datos
    if (result == 0) {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.print(" °C\tHumidity: ");
        Serial.print(humidity);
        Serial.println(" %");
    } 
}

