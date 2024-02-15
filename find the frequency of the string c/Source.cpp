#include<stdio.h>
int main()
{
	char str[] = "C programming is interesting.";
	char ch = 'e';
	int frequency = 0;

	//loop until end of the string is reached
	for (int i = 0; str[i] != '\0'; i++)
	{
		//if the string character is equal to 'e'
		//increase frequency by 1
		if (str[i] == ch)
		{
			++frequency;
		}
	}
	printf("Frequency of %c:%d", ch, frequency);

	return 0;


}