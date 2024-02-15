#include<stdio.h>
int main()
{
	char s[8] = "abcd";

	//change third character to 1
	s[2] = '1';
	printf("%c\n", s[0]);
	printf("%c\n", s[1]);
	printf("%c\n", s[2]);

	return 0;


}