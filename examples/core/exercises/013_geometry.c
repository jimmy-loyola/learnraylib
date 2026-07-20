#include "raylib.h"
#include <stdio.h>

int main(void) {
InitWindow(800, 600, "lines");
SetTargetFPS(60);


while(!WindowShouldClose()) {
	int x = 400;
        int y = 300;
	BeginDrawing();
        while (x <= 600) {
        DrawPixel(x, y, BLUE);
	x = x + 1;
	y = y - 1;
	}

        x = 400;
        y = 300;

        while (x > 200) {
	printf("%d\n", x);
        DrawPixel(x, y, GREEN);
	x = x - 1;
	y = y - 1;
	}

	x = 400;
	y = 300;
        while (y > 100) {
	printf("%d\n", y);
        DrawPixel(x, y, YELLOW);
	y = y - 1;
	}

	x = 400;
	y = 300;
        while (x > 200) {
	printf("%d\n", x);
        DrawPixel(x, y, GREEN);
	x = x - 1;
	y = y + 1;
	}

	x = 400;
        y = 300;
	BeginDrawing();
        while (x <= 600) {
        DrawPixel(x, y, BLUE);
	x = x + 1;
	y = y + 1;
	}

	x = 400;
	y = 300;
        while (y < 500) {
	printf("%d\n", y);
        DrawPixel(x, y, YELLOW);
	y = y + 1;
	}

        x = 400;
	y = 300;
        while (x > 200) {
	printf("%d\n", x);
        DrawPixel(x, y, RED);
	x = x - 1;
	}

        x = 400;
	y = 300;
        while (x < 600) {
	printf("%d\n", x);
        DrawPixel(x, y, RED);
	x = x + 1;
	}

        EndDrawing();
}
 return 0;
}
