#include<stdio.h>
void display(void);
void (*funcp)(void);
void display();
{
	printf("HELLO BTS");
}
int main()
{
	display();
	funcp=&display;
	(*funcp)();
}
