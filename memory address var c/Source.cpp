#include<stdio.h>
int main()
{
	int var = 5;
	printf("var = %d\n", var);
	//we have used &var here
	//we use %p to print te address
	printf("address of var=%p", &var);
	return 0;
}