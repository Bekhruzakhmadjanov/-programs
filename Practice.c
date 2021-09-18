#include <stdio.h>
/*
 * Author:
 * Date:
 * Purpose: get the user's mark and determine their grade
 * 0-49: N
   50-59: P
   60-69: C
   70-79: D
   80-100: H
 */
int main()
{
	float totalMark = 0.0;
	int numStudents = 0;
	float average = 0.0;
	int remainder = 0;
//	const char GRADEN = 'N';
//	const char GRADEP = 'P';
//	const char GRADEC = 'C';
//	const char GRADED = 'D';
//	const char GRADEH = 'H';
//	const float PI = 3.1415;
//	int sNo = 20120434;
//	long ccNumber = 12234567891;
	
	printf("Please enter the total mark for the class (a positive decimal number): ");
	scanf("%f%*c", &totalmark);
	printf("You entered %0.2f\n", totalmark);
	
	printf("Please enter the number of students in the class (a positive decimal number): ");
	scanf("%d%*c", &numStudents);
	printf("You entered %d\n", numStudents);
	
//	average = totalMark/numStudents;
//	printf("The average mark in the class is: %0.2f\n", average);
	
	remainder = totalMark % numStudents;
	printf("The remainder after division: %d\n", remainder);
	
	//the mark in invalid
	/*if(mark < 0 || mark > 100)
	{
		printf("You have failed the unit.");
	}
	else //the mark in valid
	{
		if(mark < 50)//fail
		{
			printf("You grade is %c.\n", GRADEN);
		}
		else if(mark >=50 && mark < 60) //pass
		{
			printf("You grade is %c.\n", GRADEP);
		}
		else if(mark >=60 && mark < 70) //pass
		{
			printf("You grade is %c.\n", GRADEC);
		}
		else if(mark >=70 && mark < 80) //pass
		{
			printf("You grade is %c.\n", GRADED);
		}
		else //high distinction
		{
			printf("You grade is %c.\n", GRADEH);
		}
	}*/
	return 0;
}