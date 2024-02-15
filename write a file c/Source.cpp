#include<stdio.h>
#include<stdlib.h> //used for exit()
int main()
{
	FILE *fptr;
    //open file in the writing mode
	fptr = fopen("C:\\programm.txt", "w");

	//if FILE pointer is NULL,
	//end the program
	if (fptr == NULL) {
		printf("ERROR!");
		exit(1); //exit the program
	}
	//write data to the file
	//Syntax: fprint(file_pointer,data);
	fprintf(fptr, "FILES ARE COOL");
	//CLOSE FILE
	fclose(fptr);
	return 0;
}

