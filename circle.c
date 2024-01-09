#include <graphics.h>

int main() {
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color to red
    setcolor(RED);

    // Draw a circle at coordinates (300, 200) with radius 100
    circle(300, 200, 100);

    // Display the circle
    delay(10000); // Display for 10 seconds
    closegraph();

    return 0;
}
