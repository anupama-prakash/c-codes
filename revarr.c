 #include<stdio.h>
int main()
{
	int a[50],i,n,temp;
	printf("enter array length:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d/n",a[i]);
		
	}
}

		

