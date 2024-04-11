// Find the HCF (Highest Common Factor) of 2 numbers

program:

#include <stdio.h>
int main() {
    int n1,n2,temp;
    scanf("%d %d",&n1,&n2);
    if (n1<n2) 
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    printf("HCF is %d",num1); 
    return 0;
}
/*
output:
36 48
HCF is 12
  */
