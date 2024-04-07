/* Program to find the length of the string   */

Program:

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s",&str);
    int length = strlen(str);
    printf("The length of the string is %d\n", length);
    return 0;
}

/* 
output:
hello
The length of the string is 5
*/
