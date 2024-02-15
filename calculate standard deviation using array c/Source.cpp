#include<stdio.h>
#include<math.h>
double calculateSD(double data[], int length)
{
	double sum = 0.0, mean, result;
    
	//compute average of array elements
	for (int i = 0; i < length; i++)
	{
		sum = sum + data[i];
	}
	mean = sum / length; //find mean

	//applying SD formula
	for (int i = 0; i < length; i++)
	{
		result += (data[i] - mean) * (data[i] - mean);
	}
	result = sqrt(result / length);
}
int main()
{
	double data[5] = { 3,9,45,22,23 }, result;

	//find the size of array
	int length;
	length = (int)sizeof data / sizeof data[0];

	result = calculateSD(data, length);
	printf("Standard Deviation = %.2lf", result);

	return 0;
}