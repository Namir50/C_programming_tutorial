#include<stdio.h>
int main()
{
	int km, m;
	float mi;
	printf("Enter the value of kilometer: ");
	scanf("%d", &km);

	mi = km * 0.621;
	m = km * 1000;
	printf("kilometer * meter is: %d", m);
	printf("\n kilometer * miles is: %f", mi);
	return 0;
}