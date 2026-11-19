#include<stdio.h>
int main()
{
	char a;    
	printf("Enter any charector to check if it a digit or not:\n ");
	scanf("%c",&a);
	if (a<='9' && a>='0')
	{
		printf("DIGIT");
	}
	else
	{
		printf("NOT A DIGIT");
	}
	return 0;
}

