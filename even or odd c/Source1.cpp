#include<stdio.h>
int main()
{
	double n1, n2, n3;
	printf("Enter three different numbers: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 > n2 && n1 > n3) {
		printf("Largest number is : %.2lf", n1);
	}
	if (n2 > n1 && n2 > n3)
	{
		printf("Largest number is: %.2lf", n2);

	}
	if (n3 > n1 && n3 > n2)
	{
		printf("Largest number is : %.2lf", n3);

	}
	return 0;

}