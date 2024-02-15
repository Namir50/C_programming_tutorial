#include<stdio.h>
int main()
{

	int number;
	printf("enter a number: ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("the number is even number");
		scanf("%d", &number);


	}
	else {
		printf("it is an odd number");
		scanf("%d", &number);

	}
	return 0;
}