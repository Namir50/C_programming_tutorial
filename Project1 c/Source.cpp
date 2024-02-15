#include<Stdio.h>
int main()
{
	int *pc, c;
	c = 5;
	//assign address to a pointer
	pc = &c;

	printf("value of pc=%p\n", pc);
	printf("address of c= %p\n", &c);

	return 0;


}