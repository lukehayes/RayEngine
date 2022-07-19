#include "raylib.h"
#include "game.h"
#include "entity/entity.h"

float delta = 0.0;

int main() {

	game.init();


    while (!WindowShouldClose())
    {
        delta = GetFrameTime();

		BeginDrawing();
			ClearBackground(GRAY);
        EndDrawing();
    }

	CloseWindow();

    return 0;
}

