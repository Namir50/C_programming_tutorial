#include<stdio.h>
double addNumbers(double n1, double n2)
{
	double result;
	result = n1 + n2;
	return result;

}
double multiplyNumbers(double n1, double n2)
{
	return n1 * n2;

}
int main ()
{
	double a = 5.4, b=4.5;
	printf("sum: %.2lf\n", addNumbers(a,b));
	printf("product: %.2lf\n", multiplyNumbers(a,b));
	return 0;

}