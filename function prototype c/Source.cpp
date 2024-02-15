#include<stdio.h>
//function prototype
int addNumbers(int, int);
int main()
{
	int a = 6, b = 8, result;

	//calling the function
	result = addNumbers(a, b);
	printf("sum=%d", result);
	return 0;
}
//defining the function after defining the call
int addNumbers(int n1, int n2)
{
	\
	int sum;
	sum = n1 + n2;
	return sum;

}
