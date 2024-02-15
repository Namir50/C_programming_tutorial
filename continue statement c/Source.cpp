#include<stdio.h>
int main()
{
	int number;
	for (int i = 1; i <= 5; ++i) {
		printf("enter a number: ");
		scanf("%d", &number);

		if (number < 0) {
			continue;
		}
		printf("you entered %d.\n", number);



	}
	return 0;
}

