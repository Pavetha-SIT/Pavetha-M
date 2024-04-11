//program to convert binary to octal

program:

#include <stdio.h>
int main() 
{
    long long a;
    int octal=0,decimal=0,i=0;
    scanf("%lld", &a);
    while(a!=0) 
    {
        decimal+=(a%10)<<i;
        ++i;
        a/=10;
    }
    i=1;
    while (decimal!=0) 
    {
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    printf("Octal equivalent: %d",octal);
    return 0;
}

/*
output:
1011
Octal euivalent: 13
*/
