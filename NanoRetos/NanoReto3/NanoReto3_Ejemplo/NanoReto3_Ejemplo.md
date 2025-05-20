## NanoReto 3 – Ejemplo 1

En este ejemplo se utiliza un sensor DHT11 para medir temperatura y humedad, y se muestran los datos por el monitor serie.

El sensor está conectado al pin digital 27. El código usa una librería alternativa en la que se crea un objeto `DHT11` y se utiliza el método `readTemperatureHumidity()` para obtener las lecturas.

El montaje físico está representado en el esquemático. Necesitas un sensor DHT11 conectado correctamente.

![Esquematico Nano Reto 3 Ejemplo](NanoReto3_Ejemplo_Esquematico.png)

Es necesario tener instalada correctamente la libreria DHT11.