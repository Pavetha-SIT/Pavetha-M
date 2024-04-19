/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.  */


#include <stdio.h>
#include <string.h>
int main() {
    char s[100],t[100];
    int s_count[m]={0};
    int t_count[m]={0};
    scanf("%s", s);
    scanf("%s", t);
    for(int i=0;s[i]!='\0';i++) 
    {
        s_count[s[i]]++;
    }
    for(int i=0;t[i]!='\0';i++)
    {
        t_count[t[i]]++;
    }
    int a=1;
    for(int i=0;i<m;i++) 
    {
        if(s_count[i]!=t_count[i]) 
        {
            a=0; 
            break;
        }
    }
    if(a) 
    {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

/*
output:
anagram
nagaram
True
*/
