#include "raylib.h"

int main(void)
{
   InitWindow(800, 600, "001_shapes");
   SetTargetFPS(60);
   while (!WindowShouldClose())
  {
    BeginDrawing();
    DrawRectangle(0, 0, 100, 50, RED);
    DrawRectangle(100, 100, 100, 100, BLUE);
    DrawCircle(200, 500, 100, GREEN);
    DrawLine(300, 20, 500, 400, YELLOW);
    DrawLine(500, 400, 750, 150, YELLOW);

    EndDrawing(); 
  }
    //DrawRectangle(int posX, int posY, int width, int height, Color color);
    return 0;
}
