#include <stdio.h>
int main()
{
       int num;
      printf("Enter a number:");
        scanf("%d",&num);
       printf("%d after swapping nibble in a byte %d\n",num,( (num & 0x0F) << 4 | (num & 0xF0) >> 4 ));

        return 0;

}
