#include "raylib.h"

void mydrawsquare_lefteye(Color squarecolor) {
  int x = 200;
  int y = 200;
  while(x < 400) {
    while(y < 400) {
      DrawPixel(x, y, squarecolor);
      y = y + 1;
    } 
    y = 200;
    x = x + 1;
  }
}

void mydrawsquare_righteye(Color squarecolor) {
  int x = 600;
  int y = 200;
  while(x < 800) {
    while(y < 400) {
      DrawPixel(x, y, squarecolor);
      y = y + 1;
    } 
    y = 200;
    x = x + 1;
  }
}

void mydrawsquare_centermouth(Color squarecolor) {
  int x = 400;
  int y = 400;
  while(x < 600) {
    while(y < 700) {
      DrawPixel(x, y, squarecolor);
      y = y + 1;
    } 
    y = 400;
    x = x + 1;
  }
}

void mydrawsquare_leftmouth(Color squarecolor) {
  int x = 300;
  int y = 500;
  while(x < 400) {
    while(y < 800) {
      DrawPixel(x, y, squarecolor);
      y = y + 1;
    } 
    y = 500;
    x = x + 1;
  }
}

void mydrawsquare_rightmouth(Color squarecolor) {
  int x = 600;
  int y = 500;
  while(x < 700) {
    while(y < 800) {
      DrawPixel(x, y, squarecolor);
      y = y + 1;
    } 
    y = 500;
    x = x + 1;
  }
}

int main(void) {
    InitWindow(1000, 1000, "colors");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGREEN);
        mydrawsquare_lefteye(BLACK);
        mydrawsquare_righteye(BLACK);
        mydrawsquare_centermouth(BLACK);
        mydrawsquare_leftmouth(BLACK);
        mydrawsquare_rightmouth(BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
