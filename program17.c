#include<stdio.h>
#include<math.h>
int main()
{
	int num, originalnum, remainder, n = 0;
	double result = 0.0;
	
	printf("Enter a number to check if the given number is amstrong or not:-\n");
	scanf("%d",&num);
	
	originalnum = num;
	
	//store the number of digits of num in n
	for (originalnum; originalnum != 0; ++n)
	{
		originalnum /= 10;
	}
	
	
	originalnum = num;
	
	//check if the number is amstrong number
	while (originalnum != 0)
	{
		remainder = originalnum % 10;
		
		// round() handless potential floating point inaccuracies  from pow()	
		result += round(pow(remainder, n));
		
		originalnum /= 10;
	}
	
	
	//Display the result
	if((int)result == num )
	{
		printf ("The number is an amstrong number");
	}
	else
	{
		printf ("The number isn't an amstrong number");
	}
	
}
