#include "raylib.h"

int main(void)
{
   InitWindow(800, 600, "003_shapes");
   SetTargetFPS(60);
   Color RectColor = RED;
   while (!WindowShouldClose())
  {
   if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
   {
    if (ColorIsEqual(RectColor, RED)) {
	    RectColor = BLUE;
    } else {
	RectColor = RED;
    }
   }
   BeginDrawing();
   DrawRectangle(100, 100, 100, 100, RectColor);
   EndDrawing();
  }
}
