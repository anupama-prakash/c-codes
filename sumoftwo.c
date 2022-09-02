#include<stdio.h>
#define x 10
#define y 10
#if 1
int sum_int(int a,int b)
{
	return a+b;
}
#endif
int main(void)
{
	int out =sum_int(x,y);
	printf("sum of x and y=%d\n",out);
	return 0;
}
