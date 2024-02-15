#include<stdio.h>
#include<stdlib.h>
double cube(double num){
	double result = num * num * num;
	return result;
}
int main()
{
	printf("answer is %f",cube(3.0));
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//double cube(double num);
//int main(){
 //   printf("%lf", cube(2.0));
 //   return 0;
//}
//double cube(double num){
//    double result = num*num*num;
//    return result;
//}

//#include<stdio.h>
//int addNumbers(int n1, int n2)
//{
//	int sum;
//	sum = n1 + n2;

//	return sum;
//}
//int main()
//{
//	int a = 6, int b = 9, result;
//	result = addNumbers(a, b);
//	printf("sum=%d", result);
//	return 0;
// } 

	 