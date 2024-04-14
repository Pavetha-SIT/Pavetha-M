//program to print Diamond star pattern 

program:

#include <stdio.h>
int main() {
    int n, i, j, s;
    scanf("%d", &n);
    for(i=0;i<=n/2;i++) {
        for(s=0;s<n/2-i;s++) {
            printf(" ");
        }
        for(j=0; j<2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=n/2-1;i>=0;i--) {
        for(s=0;s<n/2-i;s++) {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
output:
  *
 ***
*****
 ***
  *
*/
