#include<stdio.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("the number is even number");

	}

	else
	{
		printf("the number is odd number");


	}
	return 0;

}