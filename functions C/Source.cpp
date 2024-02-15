#include<stdio.h>
#include<stdlib.h>
int main()
{
	sayHi("namir");
	return 0;
}
void sayHi(char name[]) {
	printf("HELLO %s", name);
}