#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    int x = getmaxx() / 2;     // Get the x-coordinate of the center
    int y = getmaxy() / 2;     // Get the y-coordinate of the center
    int radius = 50;           // Set the radius of the circle

    // Use the circle function to draw a circle
    circle(x, y, radius);

    // Use the setcolor function to set the color of the circle
    setcolor(RED);

    // Use the setfillstyle function to fill the circle with color
    setfillstyle(SOLID_FILL, BLUE);

    // Use the floodfill function to fill the color inside the circle
    floodfill(x, y, RED);

    delay(5000);  // Delay to display the window for 5 seconds

    closegraph();  // Close the graphics window

    return 0;
}

