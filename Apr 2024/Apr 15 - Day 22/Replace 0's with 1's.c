// Program to replace 0 with 1

Program:

#include <stdio.h>
int main() {
    int num,a,d,b=0,m=1;
    scanf("%d",&num);
    a=num;
    while(num>0) {
        d=num%10; 
        if(d==0) {
            d=1; 
        }
        b=b+d*m;
        m*=10; 
        num=num/10; 
    }
    printf("Number after replacing 0 with 1: %d",b);
    return 0;
}

/*
output:
2086005
Number after replacing 0 with 1: 2186115
*/
