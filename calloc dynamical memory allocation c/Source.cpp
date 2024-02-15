#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n, i;
	printf("enter thee size of array: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n,sizeof(int));
	for (int i = 0; i < n; ++i);
	{
		printf("enter a number: ");
		scanf("%d", &ptr[i]);

	}
	for (int i = 0; i < n; ++i);
	{
		printf("\nELEMENTS ARE: %d ", ptr[i]);

	}
	return 0;




}