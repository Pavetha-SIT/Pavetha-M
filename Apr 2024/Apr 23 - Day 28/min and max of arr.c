//2).Write a Program to print the Maximum and Minimum elements in an array.

program:

#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,mn,mx;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mn=arr[0];
    mx=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
    }
    printf("maxi element is %d\n",mx);
    printf("mini element is %d",mn);
}
/*
output:
enter no of elements in array: 5
enter elements of array: 4 7 2 9 5
max element is 9
mini element is 2
*/
