#include <stdio.h>
#include <math.h>

typedef struct Point {
    float x;
    float y;
} p;

int main() {
    p p1, p2;
    float distance;

    printf("Enter x and y for Point 1: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter x and y for Point 2: ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("Distance between the two points = %.2f\n", distance);

    return 0;
}
