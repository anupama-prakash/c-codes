#include<stdio.h>
int main()
{
	unsigned int num,pos,specbit,k;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("enter the position:\n");
	scanf("%d",&pos);
	printf("enter the number of bits:");
	scanf("%d",&k);
//	specbit=((num&(1<<(pos-1)))?1:0);
        specbit=((1<<k)-1)&(num>>(pos-1));
	printf("%d",specbit);
	return 0;
}



