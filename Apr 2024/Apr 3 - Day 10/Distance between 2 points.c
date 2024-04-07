/*1. Calculate distance between 2 points */

Program:

#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    int a = x2 - x1;
    int b = y2 - y1;
    double d = sqrt(a * a + b * b);
    printf("The distance between the two points is: %.2f", d);
    return 0;
}

/* output:
1,1
4,5
The distance between the two points is:5.00  */
