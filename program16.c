#include<stdio.h>
int main()

{
	//Program to find if a charactor entered by user is upper case or not
	char a, A,b;
	a = 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z';
	A = 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z';
	printf("Enter an Alphabet to find if a character entered by user is upper case or not\n ");
	scanf("%s",&b);
	if(a==b)
	{
		printf("Lower case");
	}
    else if(A==b)
    {
    	printf("Upper case");
	}
	else
	{
		printf("Enter a proper alphabet you brainless fool");
	}
	return 0;
}

