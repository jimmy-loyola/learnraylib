#include "raylib.h"
#include <stdlib.h> 

void my_draw_line(int xstart, int ystart, int xend, int yend, Color line_color) {
  }

int main(void) {
    InitWindow(1000, 1000, "017 exercises");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK); 
        my_draw_line(10, 10, 10, 100, BLUE);


        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
