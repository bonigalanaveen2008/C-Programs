//Write a function that prints "Namaste" if the user is Indian and "Bonjour" if the user is French

#include<stdio.h>
void india();
void france();

int main()
{
	int i;
	printf("Enter the number '1' if Indian and '2' if you're from france'\n");
	scanf("%d", &i);
	if(i == 1)
	{
		india();
	}
	else
	{
		france();
	}
	return 0;
}

void india()
{
	printf("Namaste");
}

void france()
{
	printf("Bonjour");
}

