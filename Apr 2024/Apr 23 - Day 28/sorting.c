//1). Write a Program to sort First half in Ascending order and the Second in Descending order.

program:

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("elements of array: ");
    for(i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2-1;i++) 
    {
        for(j=0;j<n /2-i-1;j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=n/2;i<n-1;i++)
    {
        int max=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max]) 
            {
                max=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    printf("Sorted array : ");
    for(i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*
output
size of array  8
elements of the array: 5 8 3 2 9 4 7 1
Sorted array  1 2 3 4 9 8 7 5
*/
