#include<stdio.h>
int main()
{
	int i,readcount=0,writecount=0,zerocount=0;
	int a[]={1,3,0,43,0,5,0,76};
	for(i=0;i<8;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\n");
	for(i=0;i<8;i++){
		if(a[i]!=0)
		{
			a[writecount++]=a[i];
		//	zerocount++;
		}
		readcount++;
	}
	
	for(i=writecount;i<8;i++)
	{
		a[i]=0;
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\n");
}
