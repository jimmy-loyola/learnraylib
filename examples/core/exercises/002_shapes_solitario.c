#include "raylib.h"

int main(void)
{
   InitWindow(880, 600, "001_shapes");
   SetTargetFPS(60);
   while  (!WindowShouldClose())
  {
    BeginDrawing();
    DrawRectangle(100, 100, 100, 100, RED);
    EndDrawing();
  }
}	
