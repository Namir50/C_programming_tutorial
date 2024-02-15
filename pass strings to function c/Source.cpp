#include<stdio.h>
void printString(char str[])
{
	printf("String Output: ");
	puts(str);
}
int main()
{
	char str[10] = "hey there";
	printString(str);
	return 0;

}