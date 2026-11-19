#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a<=b&&a<=c)
	{
		printf("%d is the smallest number");
	}
	else if (b<=a&&b<=c)
	{
		printf("%d is the smallest number", &b);
	}
	else
	{
		printf("% is the smallest number", &c);
	}
	return 0;
	
}
