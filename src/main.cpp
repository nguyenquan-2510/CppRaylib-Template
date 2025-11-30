#include <raylib.h>

#include "std.hpp"

int main()
{
    ssd a;

    InitWindow(800, 600, "Example");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("This is a Template!", 100, 100, 40, GREEN);

        EndDrawing();
    }

    CloseWindow();
    a.hello();
    return 0;
}