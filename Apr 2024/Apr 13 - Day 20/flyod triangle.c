program:

#include <stdio.h>

int main()
{
    int a,b=0;
    scanf("%d ",&a);
    int i,j;
    for(i=0;i<a;i++){
        for(j=a;j<=a;j++){
            printf("%d ",b++);
        }
        printf("\n");
    }
}

/*
output:
1 
2 3 
4 5 6 
7 8 9 10
*/
