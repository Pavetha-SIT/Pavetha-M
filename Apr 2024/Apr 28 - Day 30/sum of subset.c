// Write a Program to print sums of all subsets in an array.

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

