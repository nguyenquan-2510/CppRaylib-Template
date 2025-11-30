#include <raylib.h>

int main()
{
    InitWindow(800, 600, "Example");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("This is a Template!", 100, 100, 40, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}