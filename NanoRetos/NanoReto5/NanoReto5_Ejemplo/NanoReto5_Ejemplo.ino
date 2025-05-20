#include "BluetoothSerial.h"
BluetoothSerial SerialBT;

void setup() {
  Serial.begin(9600);       // Comunicación serie estándar (Monitor serie)
  SerialBT.begin("NanoReto5"); // Inicia Bluetooth con el nombre "NanoReto5"
  Serial.println("Bluetooth listo. Esperando conexión...");
}

void loop() {
  if (SerialBT.available()) {
    String mensaje = SerialBT.readString(); // Leer mensaje desde Bluetooth
    Serial.print("Mensaje recibido: ");
    Serial.println(mensaje);

    // Enviar respuesta
    SerialBT.println("Mensaje recibido: " + mensaje);
  }
}
