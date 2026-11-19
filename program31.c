#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0) {
        temp = -temp;  // handle negative numbers
    }

    // Keep subtracting 2 using a loop until temp becomes 0 or 1
    while (temp >= 2) {
        temp = temp - 2;
    }

    if (temp == 0) {
        printf("%d is EVEN\n", num);
    } else {
        printf("%d is ODD\n", num);
    }

    return 0;
}
