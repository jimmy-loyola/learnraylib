#include "raylib.h"

void mydrawsquare_topleft(Color linecolor) {
  int x = 0;
  int y = 0;
  while(x < 50) {
    while(y < 50) {
      DrawPixel(x, y, linecolor);
      y = y + 1;
    }
  y = 0;
  x = x + 1;
  }
}

void mydrawsquare_topright(Color linecolor) {
  int x = 50;
  int y = 0;
  while(x < 100) {
    while(y < 50) {
      DrawPixel(x, y, linecolor);
      y = y + 1;
    }
  y = 0;
  x = x + 1;
  }
}

void mydrawsquare_bottomleft(Color linecolor) {
  int x = 0;
  int y = 50;
  while(x < 50) {
    while(y < 100) {
      DrawPixel(x, y, linecolor);
      y = y + 1;
    }
  y = 50;
  x = x + 1;
  }
}

void mydrawsquare_bottomright(Color linecolor) {
  int x = 50;
  int y = 50;
  while(x < 100) {
    while(y < 100) {
      DrawPixel(x, y, linecolor);
      y = y + 1;
    }
  y = 50;
  x = x + 1;
  }
}

void mydrawsquare_center(Color linecolor) {
  int x = 25;
  int y = 25;
  while(x < 75) {
    while(y < 75) {
      DrawPixel(x, y, linecolor);
      y = y + 1;
    }
  y = 25;
  x = x + 1;
  }
}

int main(void) {
    InitWindow(100, 100, "colors");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        mydrawsquare_topleft(RED);
        mydrawsquare_topright(BLUE);
        mydrawsquare_bottomleft(YELLOW);
        mydrawsquare_bottomright(GREEN);
        mydrawsquare_center(WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
