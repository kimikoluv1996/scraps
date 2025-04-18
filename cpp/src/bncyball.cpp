#include "raylib.h"

class ball
{
private:
    /* data */
public:
    
};

int main()
{   
    ball b;

    InitWindow(1000, 800, "Bouncy Ball");

    while(!WindowShouldClose)
    {
        BeginDrawing();
            ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
}