 /*****************************************
 * Assignment 1 Part 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This is a program that accepts two numbers from the user and then adds them together 
 * and prints the resulting value. 
 *
 *****************************************/

#include <stdio.h>

int main(void) {
	
	//the integer variables: i stores input, j stores input, and k stores final value
	int i, j, k; 
	
	//initialization of i and stores first user input value 
	printf("Enter a number: ");
	scanf("%d", &i);
	
	//initialization of j and stores second user input value 
	printf("Enter a number: ");
	scanf("%d", &j);
	
	//statement that adds i and j together to get the result and stores it in k
	k = i+j; 
	
	//prints the result of the addition to the console
	printf("%d + %d = %d \n", i, j, k);
	
	return 0; //return value for the main function
}