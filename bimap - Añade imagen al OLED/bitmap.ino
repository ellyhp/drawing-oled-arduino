#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define SSD1306_SWITCHCAPVCC 0x1C // Configuración de la fuente de alimentación del SSD1306

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Bitmap en formato PROGMEM
static const unsigned char PROGMEM foto[] = {
  // Aquí va la matriz de datos de la imagen
};

void setup() {
  Serial.begin(115200);

  // Inicializa la pantalla SSD1306
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }
  delay(2000); // Pausa de 2 segundos

  // Limpia el búfer de la pantalla.
  display.clearDisplay();

  // Dibuja el bitmap en la pantalla.
  display.drawBitmap(0, 0, foto, SCREEN_WIDTH, SCREEN_HEIGHT, 1);
  display.display();
}

void loop() {
  // Tu código del bucle, si es necesario
}
