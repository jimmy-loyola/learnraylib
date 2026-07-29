#include "raylib.h"

void fillrect(int x, int y, int width, int height, Color fillcolor) {

while(x < width) {
while(y < height) {
DrawPixel(x, y, fillcolor);
y = y + 1;
}
y = 250;
x = x + 1;
}
}

int main(void) {
InitWindow(1000, 1000, "fillrect");
SetTargetFPS(60);
while(!WindowShouldClose()) {
ClearBackground(BLACK);
BeginDrawing();
fillrect(250, 250, 750, 750, RED);
EndDrawing();

} 
return 0;
}
