/*
 * Author: Bekhruz Akhmadjonov
 * Date: 15.08.2021
 */
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int division = 0;
	int remainder = 0;
    printf("Please enter the first integer number: ");
    scanf("%d%*c", &num1);
    printf("Please enter the second integer number: ");
	scanf("%d%*c", &num2);
    if(num2 == 0)
    {
        printf("You cannot divide by zero! Try another number.\n");
    }
   
	else 
	{
		division = num1 / num2;
		printf("Division result of two numbers: %d \n", division);
	
		remainder = num1 % num2;
		printf("Remainder: \n%d", remainder);
	}		
	return 0;
}