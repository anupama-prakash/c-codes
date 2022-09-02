#include<stdio.h>
int fib(int n)
{
	if(n==1 || n==0)
		return n;
	else
		return(fib(n-1)+fib(n-2));
}
int main()
{
	int num,res;
	printf("enter the number:");
	scanf("%d",&num);
	res=fib(num);
	printf("%d\n",res);
}

