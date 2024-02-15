#include<stdio.h>
int isPrimeNumber(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if (n % 1 == 0)
			return 0;

	}
	return 1;

}
int main()
{
	int n = 67, isPrime;

	isPrime = isPrimeNumber(n);
	if (isPrime == 1)
		printf("%d is a prime number");
	else
		printf("%d is not a prime number");
	return 0;
}