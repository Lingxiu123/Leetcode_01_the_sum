#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
	int i,j;
	int temp[2]={0};
	int *p=(int *)malloc(2*sizeof(int));
	for(i=0;i<numsSize;i++)
	{
		for(j=i+1;j<numsSize;j++)
		{
			if(target == nums[i]+nums[j])
			{
				temp[0]=i;
				temp[1]=j;
			}
		}
	}	
	p[0]=temp[0];
	p[1]=temp[1];
	return p;
}
int main(int argc, char *argv[]) 
{
	int n[4]={0,4,3,0};
	int *num= twoSum(n,4,0);
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d\n",num[i]);
	}
	system("pause"); 
	return 0;
}
