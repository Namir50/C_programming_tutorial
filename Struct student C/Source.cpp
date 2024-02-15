#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student {
	char name[50];
	int phoneNumber;
	int age;
	double percentage;
};
int main()
{
	struct Student student1;
	strcpy(student1.name, "Namir");
	student1.phoneNumber = 9326922187;
	student1.age = 18;
	student1.percentage = 80;

	struct Student student2;
	strcpy(student2.name, "Shah");
	student2.phoneNumber = 9326922187;
	student2.age = 17;
	student2.percentage = 80;

	printf("Name: %s\n", student1.name);
	printf("Phone Number: %d\n", student1.phoneNumber);
	printf("Age : %d\n", student1.age);
	printf("Percentage: %lf\n\n", student1.percentage);

	printf("Name: %s\n", student2.name);
	printf("Phone Number: %d\n", student2.phoneNumber);
	printf("Age : %d\n", student2.age);
	printf("Percentage: %lf\n", student2.percentage);
	return 0;

}