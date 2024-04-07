/* 1.Program to Calculate Fahrenheit to Celsius  */

Program:

#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    float q;
    q=((p-32)*5)/9;
    printf("Celsius : %.3f",q);
    return 0;
}

/* output
77
Celsius: 25.000
*/
