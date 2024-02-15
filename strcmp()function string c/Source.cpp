#include<stdio.h>
#include<string.h>
int main()
{
	 //the strcmp function compars two strings
	char str1[] = "abcd";
	char str2[] = "cdEA";
	int result;

	//comparing strings str1 and str2
	result = strcmp(str1, str2);
	printf("Result=%d\n", result);

	if (result == 0)
	{
		printf("the strings are equal");
	}
	else
	{
		printf("the strings are not equal");
	}
	return 0;
}
