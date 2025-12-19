#include <iostream>
#include <raylib.h>
using namespace std;

#define width 30;
#define height 30;

class cell{
    public:
    int x;
    int y;
    bool state = false;
}

int main(void) {

    InitWindow(width, height, "Test Window");
    while (!WindowIsClosed){
        BeginDrawing();
    }
    return 0;
}