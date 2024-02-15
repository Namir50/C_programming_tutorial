#include<stdio.h>
int main()
{
	int number = 39, guessed_number;
	printf("enter a number(1-50):");

	while (1)
	{
		scanf("%d", &guessed_number);

		if (guessed_number > number)
		{
			printf("WRONG!enter a smaller number:");

		}
		else if (guessed_number < number)
		{
			printf("WRONGenter a greater number:");

		}
		else {
			printf("CONGRATULATIONS!correct guess.");
			break;
		}
	}
	return 0;
}