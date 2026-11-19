#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS FOR WHICH YOU WANNA FIND THE AVERAGE:\n");
	scanf("%d%d%d",&a,&b,&c);
	int semi_result;
	semi_result= a+b+c;
	int final_result;
	final_result= semi_result/3;
	printf("THE ABERAGE OF THE THREE NUMBER %d, %d, %d is \n %d", a,b,c,final_result);
	return 0;
}
