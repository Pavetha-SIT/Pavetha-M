//Write a Program to find the Maximum and minimum of two numbers without using any loop or condition. 

program:

#include <stdio.h>
int main() {
    int num1, num2, max, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = num1 ^ ((num1 ^ num2) & -(num1 < num2));
    min = num2 ^ ((num1 ^ num2) & -(num1 < num2));
    printf("Maximum of %d and %d is: %d\n", num1, num2, max);
    printf("Minimum of %d and %d is: %d\n", num1, num2, min);
    return 0;
}
/*
output:
Enter two numbers: 5 9
Maximum of 5 and 9 is: 9
Minimum of 5 and 9 is: 5
*/
