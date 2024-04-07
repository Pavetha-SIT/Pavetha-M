/*2. Divide two integers without using division, multiplication and modulus operators
Example input:
dividend = 10, divisor = 3
Output: 
3
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,p;
    scanf("%d",&n);
    scanf("%d",&m);
    p=floor(n/m);
    printf("%d",p);
    return 0;
}
/*OUTPUT
16
4
4
*/
