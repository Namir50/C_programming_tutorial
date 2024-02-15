#include<stdio.h>
int main()
{
	double number, sum = 0.0;

	for (int i = 1; i <= 10; ++i)
	{
		printf("enter a number: ");
		scanf("%lf", &number);

		if (number < 0.0)
			break;
		{
			printf("you entered: %.2lf\n", number);

		}


	
	}
	return 0;
}