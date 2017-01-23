 /*****************************************
 * Assignment 1 Part 3
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program accepts repeated input from the user, keeps a running sum of the values, and
 * then prints out the result to the console. Additionally, the summation ends when the
 * user inputs a 0 as the number. 
 *
 *****************************************/

#include <stdio.h>

int main(void) {
	
	//i is used to store the user's input and j keeps track of total 
	int i=0, j=0; 
	
	do { 
		//resets i each iteration of the loop
		i=0;
		
		//Prompts the user for input and initializes i with the input 
		printf("Enter a number (if you would like to end the program input a 0): ");
		scanf("%d", &i);
		
		//adds i to j to accumulate the total value
		j+=i; 
		
	} while(i!=0); //checks to see if the user wants to stop the program or not
	
	//print after the do-while loop is finished
	printf("Sum: %d \n", j); 
	
	//return value for the main function 
	return 0; 
}
