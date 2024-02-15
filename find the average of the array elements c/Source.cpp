#include<stdio.h>
double calculateSum(double age[])
{
	double sum = 0.0;
	for (int i = 0; i < 4; ++i);
	{
		sum = sum + age[i];
	}
	return sum;
}
int main()
{
	double result, age[] = { 23.4,55.1,22.6,3.0 };
	result = calculateSum(age);
	printf("result=%.2lf", result);
	return 0;
}
