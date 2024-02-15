#include<stdio.h>
#include<stdlib.h>
int main()
{
	char color[20];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];
	printf("enter color : ");
	scanf("%s", color);
	printf("enter plural noun: ");
	scanf("%s", pluralNoun);
	printf("enter celebrity : ");
	scanf("%s", celebrityF);
	printf("enter celebrity's last name: ");
	scanf("%s", celebrityL);
    
	printf("Roses are %s\n", color);
	printf("violets are %s\n", pluralNoun);
	printf("I love %s\n", celebrityF, celebrityL);
	


	return 0;
}