#include<ctype.h>
#include<stdio.h>
int main()
{
	char c1 = '2';
	if (isdigit(c1))
	{
		printf("%c is a numberic character", c1);

	}
	else
	{
		printf("%c is not numberic character", c1);

	}
	return 0;
}