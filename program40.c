//write a function to convert celsius to fahrenheit
#include<stdio.h>

float temperature(float celsius);

int main()
{
	float celsius;
	printf("Enter the value of the temperature in Celcius to fahrenheit:-\n");
	scanf("%f", &celsius);
	
	float fahrenheit = temperature(celsius);
	printf("The temperature in Fahrenheit is %.2f",fahrenheit);
	return 0;
}

float temperature(float celsius)
{
	float fahrenheit = celsius * (9.0/5.0) + 32.0;
	return fahrenheit;

	
}
