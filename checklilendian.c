#include<stdio.h>
int main()
{
	unsigned int x=0x12345678;
	char *ch;
	ch=(char*)&x;
	if(*ch==0x78)
	{
		printf("little endian->-0x%x\n",*ch);
	}
	else{
		printf("big endian\n");
	}
	printf("%d %d",sizeof(ch),sizeof(*ch));
	return 0;
}
