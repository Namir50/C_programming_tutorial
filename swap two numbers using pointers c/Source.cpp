#include<stdio.h>
void swapNumbers(int* n1, int* n2)
{
	int temp;

	//swap values stores in 
	//n1 and n2 addresses
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}
int main()
{
	int num1 = 1, num2 = 100;
	//address of num1 and num2 is passed
	swapNumbers(&num1, &num2);
	printf("num: %d\n", num1);
	printf("num2: %d\n", num2);
	return 0;

}