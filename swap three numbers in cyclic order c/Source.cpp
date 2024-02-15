#include<stdio.h>
void cyclicSwap(int* a, int* b, int* c)
{
	int temp;
	//swapping in  cyclic order
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
int main()
{
	int a = 1, b = 2, c = 3;
	cyclicSwap(&a, &b, &c);
	printf("values after swapping");
	printf("\na=%d\nb =%d\nc=%d", a, b, c);
	return 0;
}
