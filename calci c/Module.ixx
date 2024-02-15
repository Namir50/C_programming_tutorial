#include<stdio.h>
int main()
{
	char oper;
	int n1 = 14, n2 = 5, result;
	printf("enter an opeator(+,-,*,/):");
	scanf("%c", &oper);

	switch (oper)
	{
	case'+':
		printf("result=%d", n1 + n2);
		break;
	case'-':
		printf("result=%d", n1 - n2);
		break;
	case'*':
		printf("result=%d", n1 * n2);
		break;
	case'/':
		printf("result=%d", n1 / n2);
		break;
	default:
		printf("ERROR!operator is not corrct");


	}
	return 0;




}