//Type a program to print prime numbers in a range
#include<stdio.h>
int main()
{
	int start, end, i, j, prime;
	
	printf("Enter the start of the range:\n");
	scanf("%d", &start);
	printf("Enter the end of the range: \n");
	scanf("%d", &end);
	
	printf("Prime Numbers between %d and %d are:\n", start, end);
	// Outer loop -> goes through every number in the range
	for(i = start; i <= end; i++)
	{
		if (i < 2)
		{
			continue; //0 and 1 are not prime numbers
		}
		
		prime = 1; // assume number is prime initially
		
		//Inner loop checks if the number is divisible by any number from 2 to sqrt(i)
		for (j = 2;j * j <= i;j++)
		{
			if(i %  j == 0)
			{
				prime = 0;
				break;
			}
		}
		
		if(prime == 1)
		{
			printf("%d  ", i);
			
		}	
	}
	
	printf("\n");
	return 0;
}
