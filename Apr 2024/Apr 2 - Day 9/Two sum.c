/*1.1. Two sum -Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example input: 
 nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
#include <stdio.h>

int main()
{
    int a[1000];
    int n,m,b=0;
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d ",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
            {
                printf("[%d,%d]",i,j);
                b=1;
                break;
            }
        }
        if(b==1)
          break;
    }
    return 0;
}
/*Input:
 4
 Enter elements:2,7,11,15
 9
 Output:
 [0,1]
*/
