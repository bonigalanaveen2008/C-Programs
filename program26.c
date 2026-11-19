//Print the factorial of a number
#include<stdio.h>
int main()
{
	int i, num, result;
	printf("Enter a number to find it's factorial:\n");
	scanf("%d", &num);
	if( num == 0)
	{
		printf("The factorial of %d is 1", num);
	}
	else
	{
		for( i = 1; i<= num; i++)
		{
			result = result * i;		
	    }
     	printf("The factorial of %d is %d\n", num, result); 
	}
	
	return 0;
}	
