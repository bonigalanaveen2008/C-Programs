//Factorial of n (n is the input from the user) using recursions
#include<stdio.h>

int factorial(int num);

int main()
{
	int num;
	printf("Enter the number for which you want to find the factorial of:-\n");
	scanf("%d", &num);
	
	// 1. Capture and print the final result returned by the function
    printf("Factorial of %d is %d\n", num, factorial(num)); 
    return 0;
}

int factorial(int num)
{
	    //Base case
	if(num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		//recursive step 
	return num * factorial(num - 1); 
	}
}
