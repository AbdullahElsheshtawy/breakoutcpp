#include <raylib.h>
#include <iostream>

int main() {
  InitWindow(800, 600, "BreakOut!");

  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(GRAY);
    EndDrawing();
  }
  CloseWindow();
}
