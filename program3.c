#include <stdio.h>
#define pi 3.1416
int main()
{
	int radius;
	printf("Enter the radius of the circle to calculate the are of the circle\n");
	scanf("%d",&radius);
	int area;
	area = radius * pi*radius;
	printf("THE AREA OF THE CIRCLE IS %d",area);
	return 0;
}

