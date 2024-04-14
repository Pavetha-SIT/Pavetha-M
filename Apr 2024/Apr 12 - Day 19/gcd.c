//program to find the gcd of 2 numbers

program

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
36 48
12
  */
