// C program to add two numbers 
#include <stdio.h> 

sum2() 
{ 
	int A, B, sum = 0; 

	// Ask user to enter the two numbers 
	printf("\nEnter two numbers A and B : \n"); 

	// Read two numbers from the user || A = 2, B = 3 
	scanf("%d%d", &A, &B); 

	// Calculate the addition of A and B 
	// using '+' operator 
	sum = A + B; 

	// Print the sum 
	printf("\nSum of A and B is: %d", sum); 

	return 0; 
}

