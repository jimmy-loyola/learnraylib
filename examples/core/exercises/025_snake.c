#include "raylib.h"
#include <unistd.h>

int main(void) {
  InitWindow(1000, 1000, "snake");
  SetTargetFPS(60);

  void fillrect(const int x, const int y, const int width, const int height, Color fillcolor) {

  int cx = 0;
  int cy = 0;
  while(cx < width) {
    while(cy < height) {
    DrawPixel(x + cx, y + cy, fillcolor);
    cy = cy + 1;
    }
    cy = 0;
    cx = cx + 1;
  }
}

  int x = 500;
  int y = 500;
  while(!WindowShouldClose()) {
  usleep(1000 * 100);
  ClearBackground(RAYWHITE);
  BeginDrawing();
  int c = 0;
  while(c < 1000) {
  fillrect(0 + c, 0, 1, 1000, DARKGRAY);
  c = c + 50;
  }

  c = 0;
  while(c < 1000) {
  fillrect(0, 0 + c, 1000, 1, DARKGRAY);
  c = c + 50;
  }

 if (IsKeyDown(KEY_RIGHT)) {
        x = x + 50;
      }
      if (IsKeyDown(KEY_LEFT)) {
        x = x - 50;
      }
      if (IsKeyDown(KEY_UP)) {
        y = y - 50;
      }
      if (IsKeyDown(KEY_DOWN)) {
        y = y + 50;
      }
  fillrect(x, y, 50, 50, BLUE);
  EndDrawing();
  }
return 0;
}
