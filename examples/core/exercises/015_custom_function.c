#include "raylib.h"
#include <stdio.h>

void my_draw_rect(int xpos, int ypos, int width, int height, Color rect_color) {
   int startx = xpos;
   int starty = ypos;

  DrawPixel(xpos, ypos, rect_color);

  while (xpos < width) {
    DrawPixel(xpos, ypos, rect_color);
    xpos = xpos +1;
  }

  printf("ciclo1 %d\n", xpos);

 while (ypos < height) {
    DrawPixel(xpos, ypos, rect_color);
    ypos = ypos +1;
  }

  while (xpos > startx) {
    DrawPixel(xpos, ypos, rect_color);
    xpos = xpos -1;
  }

 while (ypos > starty) {
    DrawPixel(xpos, ypos, rect_color);
    ypos = ypos -1;
  }

}
int main(void) {
  InitWindow(1000, 1000, "015 exercises");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
  BeginDrawing();
  my_draw_rect(500, 600, 30, 20, BLUE);
  EndDrawing();
  }
  return 0;
}
