 #include "raylib.h"

int main(void)
{
   InitWindow(800, , 600"");
   SetTargetFPS(60);
   Image img = LoadImage("Background.png");
   Texture2D texture = LoadTextureFromImage(img);
   while (!WindowShouldClose())
   {
   BeginDrawing();
   DrawTexture(texture, 0, 0, WHITE);
   EndDrawing();
   } 
   CloseWindow();
}
