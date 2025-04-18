#include "raylib.h"

int main()
{
    float left = 200;
    float top = 50;

    Vector2 c = { 20, 20 };

    InitWindow(1000, 800, "POG");
    
    while(!WindowShouldClose())
    {
        c.x += 0.05;
        c.y += 0.05;
        BeginDrawing();
            DrawCircleV(c, 30, WHITE);
            DrawRectangle(left, top, 10, 250, WHITE);
            ClearBackground(BLUE);
        EndDrawing();
    }

    CloseWindow();
}