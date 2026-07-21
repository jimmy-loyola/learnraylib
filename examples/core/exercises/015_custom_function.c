#include "raylib.h"
#include <stdio.h>

void my_draw_rect(int xpos, int ypos, int width, int height, Color rect_color) {

int c = 0;

while (c < width) {
DrawPixel(xpos + c, ypos, rect_color);
c++;
}

c = 0;
while (c < height) {
DrawPixel(xpos, ypos + c, rect_color);
c++;
}

c = 0;
while (c < width) {
DrawPixel(xpos + c, ypos + height, rect_color);
c++;
}

c = 0;
while (c < height) {
DrawPixel(xpos + width, ypos + c, rect_color);
c++;
}
}
int main(void) {
  InitWindow(1000, 1000, "015 exercises");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
  BeginDrawing();
  my_draw_rect(10, 20, 100, 70, BLUE);
  my_draw_rect(30, 120, 50, 40, YELLOW);
  my_draw_rect(300, 310, 120, 10, GREEN);
    EndDrawing();
  }
  return 0;
}
