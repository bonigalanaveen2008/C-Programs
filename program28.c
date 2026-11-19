/*Calculate the sum of all the numbers between 5 and 50
{including 5 and 50}
*/
#include<stdio.h>
int main()
{
	int num1 = 5, num2 = 50, i, result = 0;
	printf("The sum of the numbers between 5 and 50 (including 5 and 50)\n");
	for (i = num1; i<= num2; i++)
	{
		result = result + i;
		printf("%d + %d = %d\n", i, result - i, result);
	}
	
	return 0;
}
