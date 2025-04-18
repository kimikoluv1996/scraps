#include <stdio.h>
#include "raylib.h"

void DrawBall(Vector2 ballPosition)
{
    DrawCircleV(ballPosition, 20, WHITE);
}

int main()
{
    int cP = 100;
    InitWindow(900, 800, "balls");
    Vector2 v = { 30, 30 };
    while(!WindowShouldClose())
    {
        const char* msg = "How many balls?";
        int step = 50;
        if(IsKeyPressed(KEY_DOWN) && cP <= 150)
        {
            cP += step;
        }
        if(IsKeyPressed(KEY_UP) && cP >= 150)
        {
            cP -= step;
        }
	    v.x += 0.5;
        BeginDrawing();
            ClearBackground(BLACK);
            //DrawBall(v);
            DrawRectangle(40, cP, 50, 50, RED);
            DrawText(msg, 40, 40, 50, RED);
            DrawText("2", 100, 100, 50, PURPLE);
            DrawText("5", 100, 150, 50, PURPLE);
            DrawText("10", 100, 200, 50, PURPLE);
        EndDrawing();
    }
    CloseWindow();
}