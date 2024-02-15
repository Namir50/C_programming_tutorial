#include<stdio.h>
int main()
{
	int number, sum = 0;
	while (1)
	{
		printf("enter a number: ");
		scanf("%d", &number);

		if (number < 0)
		{
			break;

		}
		sum = sum + number;

	}
	printf("sum=%d", sum);
	return 0;
}