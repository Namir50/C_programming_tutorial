#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age = 30;
	int *pAge = &age;
	printf("%p\n", pAge);
	printf("%d", *pAge); //this prints the value of variable age  that is 30
	return 0;
}