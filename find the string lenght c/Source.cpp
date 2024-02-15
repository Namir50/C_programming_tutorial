#include<stdio.h>
int main()
{
	char str[] = "C programming";
	int count = 0;
    //loop until null character is reached
	while (str[count] != '\0')
	{
		++count;
	}
	printf("the string length is %d", count);
	return 0;
}