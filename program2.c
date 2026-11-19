#include <stdio.h>
int main()
{
	//To calculate the area of the square when the side of the square is known
	
	int side;
	printf("Enter the length of the side of the SIDE of the square \n");
	scanf("%d",&side);
	int area;
	area= side * side;
	printf("The area of the square is %d",area);
	return 0;
}
