// int x, int y, int width, int height, Color color

#include "raylib.h"

void mydrawrect(int x, int y, int width, int height, Color color) {

int c = 0;
while(c < width) {
DrawPixel(x + c, y, color);
c = c + 1;
}


c = 0;
while(c < height) {
DrawPixel(x, y + c, color);
c = c + 1;
}

c = 0;
while(c < width) {
DrawPixel(x + c, y, color);
c = c + 1;
}


c = 0;
while(c < height) {
DrawPixel(x, y + c, color);
c = c + 1;
}

}
int main(void) {
  InitWindow(1000, 1000, "rectangle");
  SetTargetFPS(60);
  while(!WindowShouldClose()) {
  ClearBackground(BLACK);
  BeginDrawing();
  mydrawrect(100, 100, 300, 0, RED);
  mydrawrect(400, 100, 0, 100, RED);
  mydrawrect(100, 200, 300, 0, RED);
  mydrawrect(100, 100, 0, 100, RED);
  EndDrawing();
}
return 0;
}
