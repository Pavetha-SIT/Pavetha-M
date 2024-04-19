// program to replace all vowels in the string

include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    scanf("%s",s);
    char a[100];
    int b=0,i;
    for(i=0;s[i]!='\0';i++) {
        if(strchr("AEIOUaeiou",s[i])!=NULL) {
            a[b++]=s[i];
        }
    }
    for(i=0;j=b-1;i<j;i++,j--) {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    int k=0;
    for(i=0;s[i]!='\0';i++) {
        if (strchr("AEIOUaeiou", s[i])!=NULL) {
            printf("%c",a[k++]);
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}

/*
output:
hello
holle
*/
