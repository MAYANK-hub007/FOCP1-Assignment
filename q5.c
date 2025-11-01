#include <stdio.h>

int main() {
    float x, y;
    
    printf("Enter x coordinate: ");
    scanf("%f", &x);
    printf("Enter y coordinate: ");
    scanf("%f", &y);
    
    printf("\nPoint (%.2f, %.2f) lies ", x, y);
    
    if (x == 0 && y == 0)
        printf("at Origin\n");
    else if (x == 0)
        printf("on Y-axis\n");
    else if (y == 0)
        printf("on X-axis\n");
    else if (x > 0 && y > 0)
        printf("in Quadrant I\n");
    else if (x < 0 && y > 0)
        printf("in Quadrant II\n");
    else if (x < 0 && y < 0)
        printf("in Quadrant III\n");
    else
        printf("in Quadrant IV\n");
    
    return 0;
}