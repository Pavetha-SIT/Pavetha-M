// program to remove duplicates from the list

program:

#include <stdio.h>
int main() {
    int arr[100],n;
    int i,j,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) 
    {
        for(j=i+1;j<n;) 
        {
            if(arr[i]==arr[j]) 
            {
                for(k=j;k<n-1;k++) 
                {
                    arr[k]=arr[k+1];
                }
                n--; 
            } else {
                j++;
            }
        }
    }
    printf("List after removing duplicates:\n");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}

/*
output:
Enter the number of elements in the list: 8
1 2 3 4 2 3 1 5
List after removing duplicates:
1 2 3 4 5 
*/

