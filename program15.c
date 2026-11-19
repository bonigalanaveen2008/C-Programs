#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks:\n");
	scanf("%d", &marks);
	if(marks<=100&&marks>=90)
	{
		printf("A+");
	}
	else if (marks>=70&&marks<90)
	{
		printf("A");
	}
	else if(marks>=30&&marks<70)
	{
		printf("B");
	}
	else if(marks>=0&&marks<30)
	{
		printf("C");
	}
	else
	{
		printf("Correct number should be entered you point break");
	}
	return 0;
	
	
}
