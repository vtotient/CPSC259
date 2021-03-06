/*
File:				  lab1_inlab_exercises.c
	Purpose : Exercises for lab 1
	Author : Your names
	Student #s : 12345678 and 12345678
	CS Accounts : a1a1 and b2b2
	Date : Add the date here
	* /

	/* Preprocessor directives */
#include "lab1_inlab_exercises.h"
#include <stdlib.h> // For system command
#include <stdio.h>

	/*
	Try to avoid using numbers in code.  Programmers will often call
	numbers in your code 'magic numbers'.  We avoid using magic numbers
	because it is easier to debug code that doesn't use them.
	Define and use a constant like this instead: #define CONSTANT_NAME value
	*/
#define SOME_CONSTANT 10

	/*
	Main function drives the program.  Every C program must have one and
	only one main function.  A project will not compile without one.
	PRE:    NULL (no pre-conditions)
	POST:	 NULL (no side-effects)
	RETURN: IF the program exits correctly
	THEN 0 ELSE 1
	*/
	int main(void)
{
	/* Start every function with a list of variables */

	/* Then start doing things, like invoking functions and assigning
	their return values to variables */
		char string[] = "a nut for a jar of tuna";
		is_palindrome(string);

	/* The system command forces the system to pause before closing executable window */
	system("pause");
	return 0;
}

/*
Reverses the order of an array of integers
For example,
{ 1, 2, 3, 4 } -> {4, 3, 2, 1 }
{ 1, 2, 3 } -> { 3, 2, 1 }
{1} -> {1}
{} -> {}
PARAM:  array, an array of integers
PARAM:  length, the number of elements in array
PRE:    array is an array of integers
PRE:    length is the correct length of the array
POST:   the elements in array have been reversed in order
RETURN: N/A
*/
void reverse_array(int array[], int length) {

	// Implement this function here
	int temp;
	int j = length - 1;

	for (int i = 0; i < length / 2; i++) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		j--;
	}
	return;
}
/*
Returns the length of the specified C string (an array of
characters that ends with the null character '\0')
PARAM:  string is a standard C array of characters that terminates
with the null character '\0'
PRE:    string is a null-terminated array of characters
POST:   NULL (no side-effects)
RETURN: number of char (excluding the terminating null) in string
*/
int length(const char string[])
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++) {
		count++;
	}

	return count;
}

/*
Returns the number of occurrences of the specified char in the specified
char array (string)
PARAM:  string is a standard C array of characters that terminates
with the null character '\0'
PARAM:  letter_sought, a char
PRE:    string is a null-terminated array of characters
POST:   NULL (no side-effects)
RETURN: number of occurences of letter_sought in string
*/
int count_letters(const char string[], char letter)
{

	int count = 0;

	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == letter) {
			count++;
		}
	}
	return count;

}

/*
Determines if a string is a palindrome.  Skips spaces.
For example,
""     -> returns 1 (an empty string is a palindrome)
"the"  -> returns 0
"abba" -> returns 1
"Abba" -> returns 0
"never odd or even"
-> returns 1 ("neveroddoreven" reversed is the same!)
PARAM:  string is a standard C array of characters that terminates
with the null character '\0'
PRE:    string is a null-terminated array of characters
POST:   no side-effects, e.g., nothing is printed or changed
RETURN: IF string is a palindrome THEN 1
ELSE IF string is not a palindrome THEN 0
*/
int is_palindrome(const char string[]) {


	// This implementation is only partly correct
	int string_length = length(string);
	int i = 0, j = string_length - 1;
	for (i = 0; i < j; ++i, --j) {
		if (string[i] != string[j]) {
			if (string[i] == ' ')
				j++;
			else if (string[j] == ' ')
				i--;
			else
				return 0;
		}
	}
	return 1;

}
