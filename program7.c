#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter '1if it is monday and enter '2' if it is raining:\n");
	scanf("%d%d",&a,&b);
	if(a==1 && b==2)
	{
		printf("True");
	}
	else
	{
		printf("Flase");
	}
	return 0;
	
	
}
