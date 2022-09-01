#include<stdio.h>
int main()
{
	unsigned int x=0x78563412,y;
	printf("BIG  ENDIAN : 0x%x",x);
	y=(((x>>24)&0x000000ff)|((x>>8)&0x0000ff00)|((x<<8)&0x00ff0000)|((x<<24)&0xff000000));
	printf("BIG ENDIAN : 0x%x",y);
	return 0;
}

