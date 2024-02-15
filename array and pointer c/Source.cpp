#include<stdio.h>
int main()
{
	int x[3] = { 1,2,3 };
	for (int i = 0; i < 3; ++i)
	{
		printf("x[%d] = %d\n", x[i]);

	}
	printf("Address of array x is: %p\n", x);
	return 0;
}