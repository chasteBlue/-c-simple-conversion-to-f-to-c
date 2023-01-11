#include<stdio.h>

main()
{
	float Celsius;
	
	printf("Temperature Conversation Fahrenheit to Centigrade\n");
	printf("Input Temperature in Degree Fahrenheit:\n ");
	scanf("%f",&Celsius);
	
	Celsius = ((Celsius)-32) * 5.0/9.0;
	
	printf("Conversion from Fahrenheit to Celsius  : %.1f Celsius" ,Celsius);
	
}
