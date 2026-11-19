//Use library functions to calculate the square of a number given by the user
#include<stdio.h>
#include<math.h>

int power(int a, int b);

int main()
{
	int num, square;
	square = 2;
	printf("Enter the number you want to find the square:-\n");
	scanf("%d", &num);
	
	power(num,square);
	return 0;
}

int power(int num, int square)
{
	int result;
	result = pow(num, square);
	printf("The square of %d is %d", num, result);	
}
