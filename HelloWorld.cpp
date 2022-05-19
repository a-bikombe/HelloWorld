/*
Student Name: Arianna Bikombe
CSCI175N
Lab Assignment: Lab0
Project Name: Hello World!
File Name: hello.cpp
Description: Instructor provided program for first compile
Limitations: Doesn't do very much.
Credits: Code provided by instructor
*/



// Preprocessor directive placed here
#include <iostream>
using namespace std;


// Function prototypes placed here


// External variable declarations placed here


// Global variable declarations placed here


// Global constants declarations placed here


int main()
{
	// Local variable declarations placed here
	int myFavoriteNumber;

	// Print out your name and course
	cout << "Arianna Bikombe" << endl;
	cout << "CSCI175N\n" << endl;

	// Inform user what program does
	cout << "This program prints your favorite number to the console\n" << endl;



	// Prompt user to enter data needed by the program
	cout << "Enter your favorite number: " << flush;
	cin >> myFavoriteNumber;

	// A software algorithm would typically be executed after all data has been input

	// Program output done at end of program
	cout << "\n\nHello World!\n" << endl;
	cout << "Your favorite number is " << myFavoriteNumber << "\n" << endl;



	// This code pauses the program so instructor can grade
	system("pause");


	// Returns a value to the calling program
	return 0;
}

/*
test 1

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: 17


Hello World!

Your favorite number is 17

Press any key to continue . . .
*/

/*
test 2

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: -4890


Hello World!

Your favorite number is -4890

Press any key to continue . . .
*/

/*
test 3

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: 6sy


Hello World!

Your favorite number is 6

Press any key to continue . . .
*/

/*
test 4

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: 3.4


Hello World!

Your favorite number is 3.4

Press any key to continue . . .
*/

/*
test 5

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: -39.49


Hello World!

Your favorite number is -39.49

Press any key to continue . . .
*/

/*
test 6

Arianna Bikombe
CSCI175N

This program prints your favorite number to the console

Enter your favorite number: arianna


Hello World!

Your favorite number is 0

Press any key to continue . . .
*/