/*Program to print the non repeated character in the string  */

Program:

#include <stdio.h>
#include<string.h>
int main()
{
    char p[100];
    scanf("%s",&p);
    int u[100]=0;
    for(int i=0;i<strlen(p);i++)
    {
        u[p[i]]++;
    }
    for(i=0;i<strlen(p);i++)
    {
        if(u[p[i]]==1)
        {
            printf("%c ",p[i]);
        }
    }
    return 0;
}

/* output:
character
h t e
*/
