// 1.Write a  Program to check if two numbers are equal without using the bitwise operator.

program:

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(j=0;j<n;j++) 
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
            }
        }
        printf("%d ",sum);
    }
}

