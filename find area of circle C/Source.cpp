#include<stdio.h>
int main()
{
	const float PI = 3.14;
    double r;
	printf("enter the radius: ");
	scanf("%lf", &r);
	double a = 3.14 * r * r;
	printf("Area of circle is: %lf ", a);
	return 0;

}