#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *marks, i;

	printf("enter number of students: ");
	scanf("%d", &n);
	//allocate memory for n number of int
	marks = (int *)malloc(n * sizeof(int));
	
	//if memory cannot be allocated,
	//end the function
	if (marks == NULL);
	{
		printf("ERROR! memory not allocated");
		return 0;
	}
	printf("enter elements:");
	for (int i = 0; i < n; ++i);
	{
		//using the pointer to store values
		scanf("%d", marks + i);
	}
	printf("the value stored are: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d,", *(marks + i));
	}
	//deallocating memory
	free(marks);
	return 0;


}
