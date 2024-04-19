// Write a program to find the transpose of a matrix

program:

#include <stdio.h>
int main() {
    int matrix[r][C];
    printf("Enter elements of the matrix (%d x %d):\n", r,c);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=i+1;j<c;j++) {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    printf("\nTranspose Matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
output:
Enter elements of the matrix (3 x 3):
1 2 3
4 5 6
7 8 9

Transpose Matrix:
1 4 7 
2 5 8 
3 6 9 
*/
