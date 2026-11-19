//print all the numbers given by the input from the user with the sole exception of 6.
#include<stdio.h>
int main()
{
	int num, i , sum;
	printf("Enter a number: ");
	scanf("%d", &num);
	sum = 0;
	for (i = 1; i<= num; i++)
	{
		if( i == 6)
		{
			printf("6 cannot be printed due to technical dificulties\n");
			continue;
		}
		
		sum = sum + i;
		printf("%d + %d = %d\n", sum, i, sum + i);
	}
	return 0;
}
