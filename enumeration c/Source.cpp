#include<stdio.h>
enum week { Sunday, 
	Monday, 
	Tuesday,
	Wednesday, 
	Thursday,
	Friday, 
	Saturday};
int main()
{
	//create variable of type enu week
	enum week today;
	today = Wednesday;
	printf("Day %d", today +1);
	return 0;
}