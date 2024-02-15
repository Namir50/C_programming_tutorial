#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char data[100];
	fptr = fopen("D:\\program.txt", "r");
	//end program if FILE pointer is NULL
	if (fptr == NULL)
	{
		printf("ERROR!");
		exit(1); //exit the whole program
	}
	//"%[^\n]" intead of "%s" to read
	//data until the new line
	fscanf(fptr, "%[^\n]", data);
	//fscan(file_pointer, format specifier, variable);
	puts(data); //print data

	//close the file
	fclose(fptr);
	return 0;

}

