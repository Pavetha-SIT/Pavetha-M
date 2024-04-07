/* 2. Program to Check Whether a Number is Positive, Negative, or Zero   */

Program:

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else if(n<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}

/*
output:
8
Positive
*/
