#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks:\n");
	scanf("%d", &marks);
	if(marks>30&&marks<=100)
	{
		printf("PASS");
	}
	else if(marks<=30&&marks>=0)
	{
		printf("FAIL");
	}
	else
	{
		printf("Enter a vaild number you useless idiot");
	}
	return 0;
}
