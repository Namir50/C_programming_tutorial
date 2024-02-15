#include<stdio.h>
int main()
{
	int i, square;

	for (int i = 0; i <= 100; ++i)
	{
		square = i*i;
		printf("number is %d and its square is  %d\n", i, square);

	}
	return 0;
}