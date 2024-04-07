/*1. Program to convert the binary number into a decimal number   */

Program :

#include <stdio.h>
#include<math.h>
int main()
{
    long p;
    int rem,dec=0;
    scanf("%ld",&p);
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        dec=dec+(rem*pow(2,i));
        n=n/10;
    }
    printf("%ld",dec);
    return 0;
}

/* 
output:
1001
9
*/
