#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num1, num2, sum;
	printf("enter first number: ");
	scanf("%d", &num1);

	printf("enter second number: ");
	scanf("%d", &num2);


	for (int i = 0; i <= 5; i++) {
		sum = num1 + num2;
		if (i == sum) {
			printf("sum = %d", sum);
		}
	}



}