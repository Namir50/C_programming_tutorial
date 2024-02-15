#include<stdio.h>
int main()
{
	int number;
	printf("enter a number: ");
	scanf("%d", &number);

	if (number > 0)
	{
		printf("positive number");

	}
	else if (number == 0)
	{
		printf("zero");

	}
	else {
		printf("negative number");
	}
	return 0;

}
// THIS IS ANOTHER PROGRAM
#include<stdio.h>
#include<stdlib.h>
int compare(int num1, int num2, int num3){
	int result;
	if(num1>=num2 && num1>=num3){
		result = num1;
	}
		else if (num2>=num1 && num2>=num3){
		result = num2;
		}
		else{
			result =  num3;
		}
		return result;
} 
int main(){
	printf("%d",compare(2,4,6));
	return 0;
}	