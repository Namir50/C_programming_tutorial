#include<stdio.h>
int main()
{
	int *pc, c = 22;
	printf("address of c:%p\n", &c);
	printf("value of c is:%p\n", c);

	pc = &c;
	printf("address of c is:%p\n", pc);
	printf("content of c is :%p\n", *pc);

	c = 11;
	printf("content in pc is: %d\n\n", *pc);

	*pc = 2;
	printf("value of c : %d", c);
	return 0;



}
