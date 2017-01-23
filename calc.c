 /*****************************************
 * Assignment 1 Part 4
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program is a basic calculator. It is capable of multiplication, division, addition, 
 * and subtraction. It responds to operator error input, ends in a '0' is input as the operator, 
 * does not complete division by zero, and allows the user to try again if the operator is invalid. 
 * 
 *****************************************/

#include <stdio.h>

int main(void) {
	//these are the variables that will hold the user input values (i&j) and the total (k)
	int i, j, k;
	
	//the char variables that hold the chosen expression and the possible expressions 
	char operator, plus = '+', minus = '-', divide = '/', multiply = '*', end = '0'; 
	
	do { 
		//This asks a user to choose an operator 
		printf("Enter an operator (enter a 0 to end the program): ");
		scanf(" %c", &operator);
		
		//checks if the operator is valid as a -, +, /, or * sign
		if(operator == plus || operator == minus || operator == divide || operator == multiply) {
			
			//assigns a value to i 
			printf("Enter a number: ");
			scanf("%d", &i);
			
			//assigns a value to j
			printf("Enter a number: ");
			scanf("%d", &j);
			
			//checks the operator value and if it is a + does addition 
			if(operator==plus) {
				k=i+j;
			}
			
			//checks the operator value and if it is a - does subtraction 
			else if(operator==minus) {
				k=i-j;
			}
			
			//checks the operator value and if it is a / does division 
			else if(operator==divide){
				//checks to make sure the division is not by zero
				if(j==0){
					printf("I am sorry, this is an invalid division by zero.\n");
				}
				//does integer division if the division is not by zero 
				else {
					k=i/j;
				}
			}
			
			//checks the operator value and if it is a * does multiplication 
			else if(operator==multiply) {
				k=i*j;
			}
			
			//Pieces together and prints out the resulting expression the user input
			printf("%d %c %d = %d \n", i, operator, j, k);
		}
		
		//the user wants to end the program
		else if(operator=='0'){
			//goto statement causes the program to end immediately
			goto end ;
		}
		
		else { 
			//The error message for an invalid input for the operator 
			printf("The expression you entered was problematic. Please try again. \n"); 
		}
		
	} while(operator!=0);
	
	end: 
	//ending message
	printf("Good-bye\n");
		
	//return value for the main function 
	return 0;
}