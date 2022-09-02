#include<stdio.h>
int main()
{
	unsigned int  num,pos;
	printf("enter the number:");
	scanf("%x",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	num=num|(1<<pos);
	printf("0X%x",num);
	return 0;
}
