#include<stdio.h>

void printAge(int age1, int age2)
{
	printf("%d\n", age1);
	printf("%d\n", age2);

}
int main()
{
	int ageArray[] = { 2,8,4,12 };

	//passing thee second and the fourth elements
	printAge(ageArray[1], ageArray[3]);
}
