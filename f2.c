//moving zero to first
#include<stdio.h>
int main()
{
	int i,readcount=9,writecount=9;
	int a[]={1,3,0,0,0,43,0,5,0,76};
	for(i=0;i<10;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\n");
	for(i=writecount;i>=0;i--){
		if(a[i]!=0)
		{
			a[writecount--]=a[i];
		}
		readcount--;
	}
	
	for(i=0;i<writecount;i++)
	{
		a[i]=0;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\n");
}
