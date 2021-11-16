/*
 * Author: Bekhruz Akhmadjonov
 * Date: 19.09.2021
 * Purpose: menu program with 3 options (using switch-case)
 */
 #include <stdio.h>
 
 int main()
 {
	 char choice = 'x';
	 printf("Please make a choice (a for option 1, b for option 2, or c for option 3.)\n");
	 scanf("%c%*c", &choice);
	 printf("You chose: %c\n", choice);
	 
	 switch(choice)
	 {
		 case 'a': 
		 case 'A': 
		 {
			printf("You have choisen menu option 1"); 
			break;
		 }
		 
		 case 'b': 
		 case 'B': 
		 {
			printf("You have choisen menu option 2"); 
			break;
		 }
		 
		 case 'c': 
		 case 'C': 
		 {
			printf("You have choisen menu option 3"); 
			break;
		 }
		 
		 default: 
		 {
			printf("You've made an incorrect selection.\n");
		 }
	 }
	 
/*	 if(choice == 'a' || choice == 'A')
	 {
		 printf("You have choisen menu option 1");
	 }
	 else if(choice == 'b' || choice == 'B')
	 {
		 printf("You have choisen menu option 2");
	 }
	 else if(choice == 'c' || choice == 'C')
	 {
		 printf("You have choisen menu option 3");
	 }
	 //error case
	 else
	 {
		 printf("You've made an incorrect selecion.\n");
	 }
	 */
	 return 0;
 }