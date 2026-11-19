#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The number is divisible by two");
	}
	else
	{
		printf("The number is not divisible by two");
	}
	return 0;
}
