#include<stdio.h>
int main(void)
{
	int data[5], length;
	length = sizeof(data) / sizeof(data[0]);
	printf("the srray is %d", length);
	return 0;

}