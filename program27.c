//Print the reverse of the table n

#include<stdio.h>
int main()

{
	int num, i, result;
	
	printf("Enter the number of the table you want to print: \n");
	scanf("%d", &num);
		
	for (i = 20; i >= 1; i--)
	{
		result = i * num;
		printf("%d X %d = %d\n", num, i, result);
	}
	
	return 0;
}
