//1. Program to check whether given year is leap year or not

program:

#include<stdio.h>   
int main() {  
    int year;    
    scanf("%d", &year);  
    if(((year%4==0) && ((year%400==0) || (year%100!==0))  
    {  
        printf("%d is a leap year", &year);  
    } else {  
        printf("%d is not a leap year", &year);  
    }  
    return 0; 
}  

/* 
output:
2024
2024 is a leap year
*/
