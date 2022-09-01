#include<stdio.h>
#define size sizeof(int)*8

int main()
{
        int bin[size],i,num;
        int index=size-1;

        printf("Enter a number:");
        scanf("%d",&num);

        while(index>=0)
        {
                bin[index]=num&1;
                index--;
                num>>=1;
        }
        for(i=0;i<size;i++)
                printf("%d",bin[i]);
        printf("\n");
        return 0;
}
