#include<stdio.h>
void main()
{
	double c,f;
	printf("enter temperature in fahrenheit: ");
	scanf("%lf", &f);
	c = (f - 32) * 5 / 9;
	printf("\ntemperature in degree celcuis: %lf", c);


}
