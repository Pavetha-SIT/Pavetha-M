// program to convert octal to binary

program:

#include <stdio.h>
int main() {
    long long a,b=0;
    int i=0,d;
    scanf("%lld",&a);
    while (a!=0) {
        d=a%10;
        while(i<3) {
            b+=(d%2)<<i;
            d/=2;
            i++;
        }
        i=0;
        a/=10;
    }
    printf("%lld",b);
}

/* 
output:
45
100101
*/
