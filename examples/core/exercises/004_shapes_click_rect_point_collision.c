#include "raylib.h"

int main(void)
{
   InitWindow(800, 600, "003_shapes");
   SetTargetFPS(60);
   Color RectColor = RED;
   Rectangle rect = { 100, 100, 100, 100 };

  while (!WindowShouldClose())
  {
   Vector2 mouse_point = GetMousePosition();
   if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
   {
     if (CheckCollisionPointRec(mouse_point, rect)) {
        if (ColorIsEqual(RectColor, RED)) {
          RectColor = BLUE;
        } else {
          RectColor = RED;
        }
      }
   }

   BeginDrawing();
   DrawRectangleRec(rect, RectColor);
   EndDrawing();
  }
}
