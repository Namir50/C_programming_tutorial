#include<stdio.h>
#include<string.h>
int main()
{
	//strcat() concantenation(joins) two strings passes as arguments
	char str1[10] = "C ";
	char str2[20]= "programming";

	//str2 is concatenated to the 
	// end of start
	//strcat(str1,str2);
	strcat(str1, str2);

	printf(" i love %s", str1, str2);
	return 0;

}
