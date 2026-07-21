#include "raylib.h"

int main(void) {
InitWindow(800, 600, "geomtery");
SetTargetFPS(60);

int x = 400;
int y = 300;



while (!WindowShouldClose()) {
  BeginDrawing();

  x = 400;
  y = 300;
  while (x < 600) {
     DrawPixel(x, y, RED);
     x = x + 1;
     y = y + 1;
    }

  x = 400;
  y = 300;
  while (x > 200) {
     DrawPixel(x, y, YELLOW);
     x = x - 1;
     y = y - 1;
    }

  x = 400;
  y = 300;
  while (x > 200) {
     DrawPixel(x, y, GREEN);
     x = x - 1;
     y = y + 1;
    }

  x = 400;
  y = 300;
 while (x < 600) {
     DrawPixel(x, y, BLUE);
     x = x + 1;
     y = y - 1;
    }

  x = 400;
  y = 300;
 while (y > 100) {
     DrawPixel(x, y, PINK);
     y = y - 1;
    }

  x = 400;
  y = 300;
 while (y < 500) {
     DrawPixel(x, y, PURPLE);
     y = y + 1;
    }

  x = 400;
  y = 300;
 while (x > 200) {
     DrawPixel(x, y, ORANGE);
     x = x - 1;
    }

  x = 400;
  y = 300;
 while (x < 600) {
     DrawPixel(x, y, GOLD);
     x = x + 1;
    }

  x = 200;
  y = 500;
 while (x < 600) {
     DrawPixel(x, y, BROWN);
     x = x + 1;
    }

  x = 200;
  y = 100;
 while (x < 600) {
     DrawPixel(x, y, WHITE);
     x = x + 1;
    }

  x = 200;
  y = 100;
 while (y < 500) {
     DrawPixel(x, y, LIME);
     y = y + 1;
    }

  x = 600;
  y = 100;
 while (y < 500) {
     DrawPixel(x, y, SKYBLUE);
     y = y + 1;
    }

  EndDrawing();
 }
return 0;
}
