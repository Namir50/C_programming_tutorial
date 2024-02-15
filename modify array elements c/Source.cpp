#include<stdio.h>
int main()
{
	int data[] = { 12,19,13,12,17 };
	//store 100 in the second element (1 index)
	data[1] = 100;

	//store -100 in the fifth element (4 index)
	data[4] = -100;

	printf("2nd element: %d\n", data[1]);
	printf("5th element is: %d\n", data[4]);
	return 0;
}