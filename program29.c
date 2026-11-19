//print a pattern using nested loops
#include<stdio.h>
int main()
{
	int i, j;
	i = 4;
	j = 5;
	// Outer loop -> controls number of rows
	for (i = 4; i >= 1; i--)
	{
		// Inner loop -> controls number of columns (stars) in each row
		for (j = 5; j >= 1; j--)
		{
			printf("* ");
		}
		printf("\n");  // move to next line after each row
	}
	return 0;
}
