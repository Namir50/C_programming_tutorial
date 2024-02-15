#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a = 10.67, b = 54.6;
	int result;
	printf("A = 10.67, B = 54.3\n\n");
	//ceil rounds off the number gto next higher digit
	result = ceil(a);
	printf("result = %d\n", result);
	//floot rounds off the number to lower digit
	result = floor(a);
	printf("result = %d", result);
	printf(" \n\n");
	result = floor(a);
	printf("result = %d\n", result);
	result = floor(b);
	printf("result = %d", result);
	
}