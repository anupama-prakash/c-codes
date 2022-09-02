#include<stdio.h>
	int main()
	{
		int a[20],i,n,sum=0;
		printf("enter array length:");
		scanf("%d",&n);
		printf("enter the array elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for (i=0;i<n;i++)
		{
			sum+=a[i];
		}
		printf("sum of array is %d",sum);
	}


