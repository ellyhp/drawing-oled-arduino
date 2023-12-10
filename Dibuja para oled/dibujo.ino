// Mostrar imágenes en pantalla OLED 128 x 64. By: http://elprofegarcia.com
#include <OLED_I2C.h>

// Inicializar objeto OLED con pines SDA, SCL y dirección I2C 0x78
OLED ProfeOLED(SDA, SCL, 0x78);

// Definir el array de bytes para la imagen
const uint8_t DibujoLibre[] PROGMEM = {
    // ... (datos de la imagen en formato hexadecimal)
};

void setup() {
  ProfeOLED.begin(); // Inicializar la OLED
}

void loop() {
  ProfeOLED.invert(false); // Invertir colores FALSO
  ProfeOLED.clrScr(); // Borrar toda la pantalla
  ProfeOLED.drawBitmap(0, 0, DibujoLibre, 128, 64); // Mostrar la imagen en la OLED 128x64
  ProfeOLED.update(); // Imprimir en la pantalla OLED
  delay(700); // Retardo
  ProfeOLED.invert(true); // Invertir colores VERDADERO
  ProfeOLED.update(); // Imprimir en la pantalla OLED
  delay(700); // Retardo, mostrar la imagen durante 0.7 segundos
}
//Creador del código ProfeGarcia