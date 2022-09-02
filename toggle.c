#include <stdio.h>
int main()
{
    int num,k;

        printf("Enter a number:");
        scanf("%d",&num);

        printf("Enter a k:");
        scanf("%d",&k);

        printf("%d after toggling of %dth bit is %d \n",num,k,(num^(1<<(k))));

        return 0;

}
