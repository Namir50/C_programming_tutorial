#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number: ");
	scanf("%d, &number");

	if (number >= 0)
	{
		printf("positive or zero.\n");
		printf("body of if is executed.");

	}
	else {
		printf("the number is negative.\n");
		printf("body of else is executed.");

	}
	return 0;
}
//THIS IS ANOTHER PROGRAM
 #include<stdio.h>
  #include<stdin.h>
  int compare(int num1, int num2){
	int result;
	if(num1>num2){
		result = num1;
	}
	else{
		result = num2;
	}
	return result;
 }
  int main(){
	printf("%d",max(4,10));
}


	
		
		

		
	
