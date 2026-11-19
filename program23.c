#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:  ");
	do
	{
		scanf("%d", &num);
		if(num % 7 == 0)
		{
			break;
		}
		printf("%d Not a multiple of 7", num);
	}
	while(1);
	
	printf("%d Multiple of 7", num);
}
