#include<stdio.h>
int main()
{
//label:
	//printf("THIS IS A GOTO STATEMENT\n");
	
	//goto end;

//end:
	//printf("GOTO ENDS HERE\n");
	//return 0;

	 /* this is where goto is mainly used*/
	int num;
	for (int i = 0; i < 8; i++) {
		printf("%d\n", i);
		for (int j = 0; j < 8; j++) {
			printf("enter the number, enter 0 to exit\n");
			scanf("%d", &num);
			if (num == 0) {
				goto end;
			}
		}

	}
	end :
		return 0;
}