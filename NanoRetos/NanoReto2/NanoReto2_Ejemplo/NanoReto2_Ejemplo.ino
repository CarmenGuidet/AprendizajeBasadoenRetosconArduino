int LED = 12;       // Pin donde está conectado el LED
int boton = 27;      // Pin donde está conectado el botón

void setup() {
  pinMode(LED, OUTPUT);       // Configuramos el pin del LED como salida
  pinMode(boton, INPUT_PULLUP); // Configuramos el pin del botón como entrada con resistencia pull-up interna
}

void loop() {
  if (digitalRead(boton) == LOW) { // Si el botón está presionado (nivel bajo)
    digitalWrite(LED, HIGH);       // Encendemos el LED
  } else {
    digitalWrite(LED, LOW);        // Apagamos el LED
  }
}
