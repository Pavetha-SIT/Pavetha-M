// write a program to accept a number and add all the EVEN digit in that number*/

#include<stdio.h>
int main() 
{
    int num,a,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0) {
        a=num%10;
        if(a%2==0) { 
            sum+=a; 
        }
        num/=10; 
    }
    printf("Sum of even digits in the number: %d\n", sum);
}
