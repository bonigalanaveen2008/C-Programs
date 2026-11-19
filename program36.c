//	Write functions to calculate the area of a square, a circle and a rectangle.
#include<stdio.h>
#include<math.h>
#define PI 3.14159265359

void square(int side);
void rectangle( int length, int breath);
void circle(int radius);

int main()
{
	int num;
	printf("To Calculate the area of a \n sqaure '1'\n rectangle '2'\n circle '3'\n");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
		{
			int side;
			printf("Enter the side of the square:-\n");
			scanf("%d",&side);
			square(side);
		}
		break;
		
		case 2:
		{
			int length, breath;
			printf("Enter the Length and breath of the rectangle:-\n");
			scanf("%d %d", &length, &breath);
			rectangle(length, breath);
		}
		break;
		
		case 3:
		{
			int radius;
			printf("Enter the radius of the circle:-\n");
			scanf("%d", &radius);
						
			void circle(radius);	
		}
		break;
		
		default:
		{
			printf("Invalid choice.\n");
		}
		break;
            
	}
	
	return 0;
}

void square (int side)
{
	int result = side * side;
	printf("The area of the square of side %d is %d", side, result);
}

void rectangle (int length, int breath)
{
	int result = length * breath;
	printf("The area of the rectangle of length %d and breath %d is %d", length, breath, result);
}

void circle(int radius)
{
	double result = PI * radius * radius;
    printf("The area of the circle of radius %d is %.2f\n", radius, result);
}
