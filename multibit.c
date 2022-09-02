#include<stdio.h>
int main()
{
	unsigned int  num,pos,val,n;
	printf("enter the number:");
	scanf("%x",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("enter the number of bits:");
	scanf("%d",&n);
	val=((1<<n)-1);
	num=num|(val<<pos);
	printf("0X%x",num);
	return 0;
}
