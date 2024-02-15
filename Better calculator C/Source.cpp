#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double num1;
	double num2;
	char op;

	
	for (int i = 0; i <= 10;++i) {
		printf("ENTER A NUMBER: ");
		scanf("%lf", &num1);
		printf("ENTER SECOND NUMBER: ");
		scanf("%lf", &num2);
		printf("ENTER OPERATOR: ");
		scanf("%s", &op);

		if (op == '+') {
			printf("answer is : %lf\n\n", num1 + num2);
		}
		else if (op == '-') {
			printf("answer is: %lf\n\n", num1 - num2);
		}
		else if (op == '/') {
			printf("answer is: %lf\n\n", num1 / num2);
		}
		else if (op == '*') {
			printf("answer is: %lf\n\n", num1 * num2);
		}
		else {
			printf("INVALID OPERATOR\n\n");
			break;
		}

	}
	return 0;
}