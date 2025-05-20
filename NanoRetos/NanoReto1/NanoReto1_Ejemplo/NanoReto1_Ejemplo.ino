int LED = 12;  // Guardamos el número de pin donde está conectado el LED

void setup() {
  pinMode(LED, OUTPUT);  // Configuramos el pin del LED como salida
}

void loop() {
  digitalWrite(LED, HIGH);  // Encendemos el LED
  delay(1000);              // Esperamos 1 segundo
  digitalWrite(LED, LOW);   // Apagamos el LED
  delay(1000);              // Esperamos 1 segundo
}
