#include "raylib.h"

int main(void)
{
   InitWindow(800, 600, "geometry");
   SetTargetFPS(60);
   int a = 100;
   int b = 100;
   int c = 100;
   int d = 100;
    while (!WindowShouldClose())
  {
    BeginDrawing();

    while(a < 500) {
      DrawPixel(100, a, RED);
      a++;
    }

    while(b < 500) {
      DrawPixel(300, b, YELLOW);
      b++;
    }

     while(c < 300) {
      DrawPixel(c, 500, BLUE);
      c++;
    }

     while(d < 300) {
      DrawPixel(d, 100, GREEN);
      d++;
    }


      EndDrawing(); 
  }
    return 0;
}

