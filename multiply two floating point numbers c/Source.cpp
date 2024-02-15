#include<stdio.h>
int main() {

	double a, b, product;
	printf("enter two numbers: ");
	scanf("%lf %lf", &a, &b);

	//calculating product
	product = a * b;
	//result up to 2  decimal point is displayed using %.2lf
	printf("product = %.2lf", product);
	return 0;
}