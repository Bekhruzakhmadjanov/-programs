/*
 * Author: Bekhruz Akhmadjonov
 * Date: 19.09.2021
 */
 #include <stdio.h>
 int main()
 {
	 int speed = 0;
	 printf("Please enter the speed: ");
     scanf("%d%*c", &speed);
	 if(speed <= 0)
	 {
		 printf("Can not be accepted.\n");
	 } 
	else
	{
	 if(speed <= 60)
	 {
		 printf("Not speeding.\n");
	 }
	 else if(speed > 60 && speed <= 65)
	 {
		 printf("Warning! Do not exceed the speed.\n"); //warning
	 }
	 else if(speed > 65 && speed <= 70)
	 {
		 printf("You recieved a $80 fine.\n"); //$80 fine
	 }
	 else if(speed > 70 && speed <= 80)
	 {
		 printf("You recieved a $150 fine.\n"); //$150 fine
	 }
	 else if(speed > 80)
	 {
		 printf("You recieved a $500 fine.\n"); //$500 fine
	 }
	}
	 return 0;
 }