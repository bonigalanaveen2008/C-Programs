#include<stdio.h>
int main()
{
	int i, n, sum;
	printf("Enter a number you want to print the sum of the First Natual numbers\n" );
	scanf("%d", &n);
	sum = 0;
	for(i = 0 ;i<= n ; i++ )
	{
		sum = sum + i;
		printf("The Sum is %d\n", sum);
		
	}
	return 0;
	
}
