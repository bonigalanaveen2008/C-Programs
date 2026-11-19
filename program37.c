#include <stdio.h>
#define PI 3.14159265359

void square(int side);
void rectangle(int length, int breadth);
void circle(int radius);

int main() {
    int num;
    printf("To calculate the area of a:\n1. Square\n2. Rectangle\n3. Circle\n");
    scanf("%d", &num);

    switch (num) {
        case 1: {
            int side;
            printf("Enter the side of the square:\n");
            scanf("%d", &side);
            square(side);
            break;
        }
        case 2: {
            int length, breadth;
            printf("Enter the length and breadth of the rectangle:\n");
            scanf("%d %d", &length, &breadth);
            rectangle(length, breadth);
            break;
        }
        case 3: {
            int radius;
            printf("Enter the radius of the circle:\n");
            scanf("%d", &radius);
            circle(radius);
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

void square(int side) {
    int result = side * side;
    printf("The area of the square of side %d is %d\n", side, result);
}

void rectangle(int length, int breadth) {
    int result = length * breadth;
    printf("The area of the rectangle of length %d and breadth %d is %d\n", length, breadth, result);
}

void circle(int radius) {
    double result = PI * radius * radius;
    printf("The area of the circle of radius %d is %.2f\n", radius, result);
}

