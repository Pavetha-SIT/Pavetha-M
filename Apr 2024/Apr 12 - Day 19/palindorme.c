//program to check whether it is palindrome or nor

program:

#include<stdio.h>  
int main()    
{    
  int n,m,l=0,b;    
  scanf("%d",&n);    
  b=n;    
  while(n>0)    
  {
    m=n%10;    
    l=(l*10)+m;    
    n=n/10;    
  }    
  if(b==l)    
     printf("palindrome");    
  else    
     printf("not palindrome");   
  return 0;  
}  

/*
ouput:
12321
palindrome
*/
