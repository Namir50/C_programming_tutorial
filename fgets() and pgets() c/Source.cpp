//we can use fgets()fucntion to read a line of string
//we can use the puts()function to print the string
#include<stdio.h>
int main()
{
	char name[30];

	//read string
	printf("enter name: ");
	fgets(name, sizeof(name), stdin);

	//print string
	printf("name: ");
	puts(name);
	return 0;
}