//print all the odd numbers from 5  to 50
#include<stdio.h>
int main()
{
	int num, i;
	num = 50;
	i= 5;
	for(i; i <= num; i++)
	{
		if ( i % 2 == 0)
		{
			continue;
		}
		printf("%d\n", i);
	    //The odd numbers are printed
	}
	return 0;
}
