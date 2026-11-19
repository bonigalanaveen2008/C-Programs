//write a function to convert celsius to fahrenheit
#include<stdio.h>

float temperature(float celsius);

int main()
{
	float celsius;
	printf("Enter the value of the temperature in Celcius to fahrenheit:-\n");
	scanf("%f", &celsius);
	
	temperature(celsius);
	return 0;
}

float temperature(float celsius)
{
	float fahrenheit;
	
	fahrenheit = celsius * 1.8 + 32;
	printf("Fahrenheit is %.2f", fahrenheit);
	
	
}
