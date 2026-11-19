#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numnbers:");
	scanf("%d%d", &a,&b);
	if (a > b)
	{
		printf("%d IS GREATER", a);
	}
	else
	{
		printf("%d IS GREATER", b);
	}
	return 0;
}
