#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;    
	printf("Enter any charector to check if it a digit or not:\n ");
	scanf("%c",&a);
	if (isdigit(a))
	{
		printf("DIGIT");
	}
	else
	{
		printf("NOT A DIGIT");
	}
	return 0;
}
