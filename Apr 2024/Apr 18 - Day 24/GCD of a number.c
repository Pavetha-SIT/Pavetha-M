// Program to find a gcd of a number

program:

#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
    int a,b;
	  scanf("%d%d",&a,&b);
	  rintf("%d",gcd(a,b));
}

/*
output:
45 60
15
  */
