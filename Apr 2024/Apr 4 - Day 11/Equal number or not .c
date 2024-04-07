/*2. Program to check if two numbers are equal without using the bitwise operator   */

Program:

#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n-m==0)
    {
        printf("Equal numbers");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}
/*
Output:
24 24
Equal numbers
*/
