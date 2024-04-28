//  Write a program to find Maximum and Minimum in a Set

program:

#include <stdio.h>
#include <float.h> 
int main() {
    double min = DBL_MAX;
    double max = DBL_MIN;
    double n;
    do {
        scanf("%lf", &n);
        if (n < 0.0001) {
        break;
        }
       if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    } while (n > 0.0000);
    printf("Min: %.4f Max: %.4f\n", min, max);
    return 0;
}

/*
output:
Min: 0.8000 Max: 5.6000
*/
