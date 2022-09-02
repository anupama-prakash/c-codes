#include<stdio.h>
int main()
{
	void *vp;
	int a=20;
	char ch='x';
	float fp=9.4;
	vp=&a;
	printf("%d %d \n",a,*(int *)vp);
	vp=&ch;
        printf("%c %c \n",ch,*(char *)vp);
	vp=&fp;
        printf("%f %f \n",fp,*(float *)vp);
}

