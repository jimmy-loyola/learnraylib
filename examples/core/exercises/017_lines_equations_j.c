#include "raylib.h"
#include <stdio.h>
#include <stdlib.h>

// line equation: y =mx + q
void my_draw_line(int x1, int y1, int x2, int y2, Color line_color) {
  int deltay = abs(y2 - y1);
  int deltax = abs(x2 - x1);
  float m1 = (float)deltay / deltax;
  float m2 = (float)deltax / deltay;
  float m3 = ((float)deltay / deltax) * -1;
  float m4 = ((float)deltax / deltay) * -1;

  printf("deltay=%d, deltax=%d, m1=%.2f, m2=%.2f, m3=%.2f, m4=%.2f\n", deltay, deltax, m1, m2, m3, m4);

  if (deltax > deltay) {
    int xs, ys;
    if (x1 < x2) {
      xs = x1;
      ys = y1;
    } else {
      xs = x2;
      ys = y2;
    }

    float m = ys >= y1 && ys >= y2 ? m3 : m1;
    int x = 0;
    while (x < deltax) {
      DrawPixel(x + xs, (m * x) + ys, line_color);
      x = x + 1;
    }
  } else {
    int xs, ys;
    if (y1 < y2) {
      xs = x1;
      ys = y1;
    } else {
      xs = x2;
      ys = y2;
    }

    float m = xs >= x1 && xs >= x2 ? m3 : m1;
    int y = 0;
    while (y < deltay) {
      DrawPixel(y / m + xs, y + ys, line_color);
      y = y + 1;
    }
  }
}

int main(void) {
    InitWindow(1000, 1000, "017 exercises");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
      BeginDrawing();
      ClearBackground(BLACK);
      my_draw_line(500, 0, 500, 1000, DARKGRAY);
      my_draw_line(0, 500, 1000, 500, DARKGRAY);

      my_draw_line(500, 500, 500, 0, RED);
      my_draw_line(500, 500, 1000, 500, RED);
      my_draw_line(500, 500, 500, 1000, RED);
      my_draw_line(0, 500, 500, 500, RED);

      my_draw_line(500, 500, 1000, 0, YELLOW);
      my_draw_line(500, 500, 1000, 1000, YELLOW);
      my_draw_line(500, 500, 0, 1000, YELLOW);
      my_draw_line(500, 500, 0, 0, YELLOW);

      my_draw_line(500, 500, 750, 0, GREEN);
      my_draw_line(500, 500, 1000, 250, GREEN);
      my_draw_line(500, 500, 1000, 750, GREEN);
      my_draw_line(500, 500, 750, 1000, GREEN);
      my_draw_line(500, 500, 250, 1000, GREEN);
      my_draw_line(500, 500, 0, 750, GREEN);
      my_draw_line(500, 500, 0, 250, GREEN);
      my_draw_line(500, 500, 250, 0, GREEN);
      EndDrawing();
    }

    CloseWindow();
    return 0;
}
