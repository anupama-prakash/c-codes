
#include<stdio.h>
int anagram(char [],char []);
int main()
{
	char a[1000],b[1000];
	printf("enter string 1:");
	scanf("%s",&a);
	printf("enter string 2:");
	scanf("%s",&b);
	if(anagram(a,b))
	{
		printf("strings are anagrams\n");
	}
	else
		printf("strings are not anagram\n");
	return 0;
}

int anagram(char a[],char b[])
{
	int fir[26]={0},sec[26]={0},c=0;
	while(a[c]!='\0')
	{
		fir[a[c]-'a']++;
		c++;
	}
	c=0;
	while(b[c]!='\0')
	{
		sec[b[c]-'a']++;
		c++;
	}
	for(c=0;c<26;c++)
	{
		if(fir[c]!=sec[c])
			return 0;
	}
	return 1;
}

