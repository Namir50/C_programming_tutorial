#include<stdio.h>
int main()
{
	int data[] = { 12,19,13,12,17 };

	//iterating from i= 0 to 4
	for (int i = 0; i < 5; ++i)
	{
		printf("index %d item: %d\n", i, data[i]);

	}
	return 0;
}