#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fpointer = fopen("D:/coding projects/C programming/employees.html","w");
	fprintf(fpointer, "Jim, Salesman\nPsm, Receptionist");
	fclose(fpointer);
	return 0; 
}