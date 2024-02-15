#include<stdio.h>
#include<stdlib.h>
int main()
{
	char grade = 'A';
	switch (grade) {
	case 'A':
		printf("YOU DID GREAT\n\n\n\n");
		break;
	case 'B':
		printf("YOU DID GOOD");
		break;
	case 'C':
		printf("NOT BAD");
		break;
	case 'D':
		printf("NEED TO WORK HARD");
		break;
	case 'E':
		printf("YOU FAILED");
		break;
	default:
		printf("INVALID GRADE");
		break;
	}
}

