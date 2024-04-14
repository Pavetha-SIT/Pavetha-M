// Program to find an alphabet by vowel or consonant

program:

#include <stdio.h>
int main() {
    char ch;
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not a letter.\n", ch);
    }
    
    return 0;
}

/*
output
o
o is a vowel.
  */
