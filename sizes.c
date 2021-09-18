#include <stdio.h>
#include <math.h>


int main()
{
	int size, max, min;

	/*******************************
	 * Calculate the size of an int
	 *******************************/
	size = sizeof(int) * 8;
	printf("The size of an int variable is %d bits. ", size);

	/* maximum value is 2^(n-1)-1 where n is the size in bits. */
	max = pow(2, (size-1)) - 1;
	
	/* minimum value is -2^(n-1) where n is the size in bits */
	min = 0 - pow(2, (size-1));

	printf("The maximum value that can be stored is %d and the minimum is %d\n\n", max, min);

	/*******************************
	 * Calculate the size of a long int
	 *******************************/
	size = sizeof(long int) * 8;
	printf("The size of a long int variable is %d bits. ", size);

	/* maximum value is 2^(n-1)-1 where n is the size in bits. */
	max = pow(2, (size-1)) - 1;
	
	/* minimum value is -2^(n-1) where n is the size in bits */
	min = 0 - pow(2, (size-1));

	printf("The maximum value that can be stored is %d and the minimum is %d\n\n", max, min);


	/*******************************
	 * Calculate the size of an char
	 *******************************/
	size = sizeof(char) * 8;
	printf("The size of an char variable is %d bits. ", size);

	/* maximum value is 2^(n-1)-1 where n is the size in bits. */
	max = pow(2, (size-1)) - 1;
	
	/* minimum value is -2^(n-1) where n is the size in bits */
	min = 0 - pow(2, (size-1));

	printf("The maximum value that can be stored is %d and the minimum is %d\n\n", max, min);

	/*******************************
	 * Calculate the size of an float
	 *******************************/
	size = sizeof(float) * 8;
	printf("The size of a float variable is %d bits.\n\n", size);

	/*******************************
	 * Calculate the size of an double
	 *******************************/
	size = sizeof(double) * 8;
	printf("The size of a double variable is %d bits.\n\n", size);


	return(0);
}

	

