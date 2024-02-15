#include<stdio.h>
#include<string.h>
int main() {
	char str1[10] = "awesome";
	char str2[10];
	char str3[10];

	//strcpy() copies the content of one string to another
	//strcpy(destination,source);

	strcpy(str2, str1);
	strcpy(str3, "WELL");

	printf("str2 is :%s\n", str2);
	printf("str3 is: %s\n", str3);
		return 0;


}
