#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number between 9 - 100:\n");
	scanf("%d",&a);
	if (a>9&&a<100)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}
