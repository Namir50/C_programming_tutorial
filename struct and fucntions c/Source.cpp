#include<stdio.h>
struct Student {
    char name[50];
    int age;
};
//data type of arguments is struct Student
void display(struct Student s)
{
    printf("Name:%s\n", s.name);
    printf("Age:%d\n", s.age);
}
int main()
{
    //create and initialize struct variable
    struct Student s1 = { "adam",22 };
    //pass struct as argument
    display(s1);
    return 0;
}
