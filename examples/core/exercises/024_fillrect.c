#include "raylib.h"

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
int main(void) {
  InitWindow(1000, 1000, "fillrect");
  SetTargetFPS(60);
  while(!WindowShouldClose()) {
    ClearBackground(BLACK);
    BeginDrawing();
    fillrect(0, 0, 500, 500, RED);
    fillrect(500, 0, 500, 500, BLUE);
    fillrect(0, 500, 500, 500, YELLOW);
    fillrect(500, 500, 500, 500, GREEN);
    fillrect(250, 250, 500, 500, WHITE);
    EndDrawing();

  } 
  return 0;
  }


