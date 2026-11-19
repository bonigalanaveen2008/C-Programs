//Print the table of a number input by the user
#include<stdio.h>
int main()
{
	int i, j, num, result;
	printf("Enter a number you want to get the table: \n");
	scanf("%d", &num);
	for(i = 1, j = num; i<=10; i++)
	{
		result = j * i;
		printf ( "%d X %d = %d\n", j, i, result);
	}
	return 0;	
}
