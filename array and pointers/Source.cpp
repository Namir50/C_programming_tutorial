#include<stdio.h>
int main()
{
	int data[5];
	//take input and store it in array
	printf("enter 5 elements: ");
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &data[i]); 
	}

	//print the array elements
	printf("array element are: ");
	for (int i = 0; i < 5; ++i) {
		printf("%d", data[i]);
	}
	for (int i = 0; i < 5; ++i) {
		printf("data[%d]= %p\n", i, data[i]);
	}
	printf("Address of array is: %p", data);

	return 0;
}