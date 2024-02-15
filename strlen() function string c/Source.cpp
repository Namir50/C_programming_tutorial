#include <stdio.h>
#include <string.h>
int main() {
	char str1[20] = "Program";
	char str2[20] = { 'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0' };

	// using the %zu format specifier to print size_t
	printf("Length of str1 = %zu \n", strlen(str1));
	printf("Length of str2 = %zu \n", strlen(str2));

	return 0;
}