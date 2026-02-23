#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(RED);         // Set the drawing color to red
    circle(300, 200, 70);  // Draw a circle at (300,200) with radius 70

    getch();
    closegraph();
    return 0;
}
