//Write a program to check if the program is even or odd
#include<stdio.h>
int main()
{
	int num, temp;
	printf("Enter a number to check if the entered number is even or odd:\n");
	scanf("%d", &num);
	
	if (num < 0)
	{
		temp = -temp; //dealing with negative numbers
	}
	
	// keep subtracting until the loop becomes 0 or 1
	while (temp >= 2)
	{
		temp = temp - 2;
		printf("%d = %d - 2\n", temp, temp -2);
	}
	
	if (temp == 0)
	{
		printf("%d is even", num);
	}
	else 
	{
		if(temp == 1)
		{
			printf("%d  is odd", num);
		}
		
	}
	return 0;
}
