#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("enter array length:");
	scanf("%d",&n);

	printf("enter the array elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;++i)
	{
		for (j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;++i)
	{
		printf("%d\n",a[i]);
	}
}

