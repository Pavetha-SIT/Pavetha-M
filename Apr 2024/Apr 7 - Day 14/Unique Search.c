//Program to find the unique element

program:

#include<stdio.h>
int main(){
    int n,i;
    printf("size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int unique=0;
    for(i= 0;i<n;i++) {
        unique ^=arr[i];
    }
    printf("unique elementis: %d\n", unique);
}

/*output:
size of array: 7
enter elements: [1,4,5,4,6,6,5]
unique elementis: 1 */
