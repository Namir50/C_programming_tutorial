#include<stdio.h>

void addNumbers(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	printf("sum=%d", sum);

}
int main()
{
	int a = 6, b = 8;
	addNumbers(a, b);
	return 0;
}