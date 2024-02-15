#include<stdio.h>
int main()
{
	int arr[5] = { 3,-4,-8,9,1 };
	//iterate through elements of array
	for (int i = 1; i < 5; ++i)
		//store the largest array
		//between arr[0] and arr[i]
		//in arr[0] in each iteration
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];

		}

	printf("largest element=%d", arr[0]);
	return 0;
}
