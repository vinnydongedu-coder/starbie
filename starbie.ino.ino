## i realized midway through this that i dont have a esp32 yet and i dont understand anything below so ill just let this in the guide be as-is

const int I2C_SDA_PIN = 6;
const int I2C_SCL_PIN = 7;
const int DHT_PIN = 3;
const int BUTTON_ONE_PIN = 4;
const int BUTTON_TWO_PIN = 5;

const MenuItem MENU_ITEMS[] = {
  {"NAP",   1,  18, -4, NAP_REACTION},   // top
  {"PLAY", 12, -9, -5, RUN_REACTION},    // right
  {"FEED",  3,  2, 18, JUMP_REACTION},   // bottom
  {"PET",   7,  0,  0, HEART_REACTION},  // left
};

{"DANCE", 15, -12, -3, JUMP_REACTION},  // left

void drawSparkle(int x, int y) {
  display.drawPixel(x, y - 2, SSD1306_WHITE);
  display.drawPixel(x - 1, y - 1, SSD1306_WHITE);
  display.drawPixel(x + 1, y - 1, SSD1306_WHITE);
  display.drawPixel(x - 2, y, SSD1306_WHITE);
  display.drawPixel(x, y, SSD1306_WHITE);
  display.drawPixel(x + 2, y, SSD1306_WHITE);
  display.drawPixel(x - 1, y + 1, SSD1306_WHITE);
  display.drawPixel(x + 1, y + 1, SSD1306_WHITE);
  display.drawPixel(x, y + 2, SSD1306_WHITE);
}

if (!isNapping() && (now / 250) % 2 == 0) {
  drawSparkle(petX - 4, petY + 18);
}

const int PET_SPRITE_WIDTH = 32;
const int PET_SPRITE_HEIGHT = 32;

};
