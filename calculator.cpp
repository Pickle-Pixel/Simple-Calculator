#include <stdio.h>
#include <iostream>


using namespace std;

double firstNum, secondNum;

int showMenu() {
	cout << "Hello, welcome to PixelPickle's calculator!" << endl;
	cout << "Please select one of the following." << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Division" << endl;
	cout << "4. Multiplication" << endl;
	cout << "5. Exit" << endl;
	cout << "*******************************************" << endl;
	return 0;
}


double add(double x, double y) { // function to add two numbers
	return x + y;
}

double subs(double x, double y) { // function to subtract two numbers
	return x - y;
}

double divide(double x, double y) { // function to divide two numbers
	return x / y;
}

double multiply(double x, double y) { // function to multiply two numbers
	return x * y;
}



int main() {
	int choice; // placeholder for user's choice
	double result; // result of the math operation
	double firstNum, secondNum; // two numbers that are inputted by the user

	do {
		// here we display the menu
		showMenu();
		cout << "Enter your choice from 1-5: " << endl;
		cin >> choice;

		if (choice >= 1 && choice <= 4) { // this is to keep the user selection within the range of valid choices
			cout << "Enter the first number: " << endl;
			cin >> firstNum;
			cout << "Enter the second number: " << endl;
			cin >> secondNum;
		}

		else {          // if the user selects an invalid choice, this message will be displayed
			cout << "Invalid choice. Please try again." << endl;

		}

		switch (choice) {
		case 1:
			result = add(firstNum, secondNum);
			cout << "The sum of " << firstNum << " and " << secondNum << " is " << result << endl;

			break;
		case 2:
			result = subs(firstNum, secondNum);
			cout << "The difference of " << firstNum << " and " << secondNum << " is " << result << endl;
			break;
		case 3:
			result = divide(firstNum, secondNum);
			cout << "The quotient of " << firstNum << " and " << secondNum << " is " << result << endl;
			break;
		case 4:
			result = multiply(firstNum, secondNum);
			cout << "The product of " << firstNum << " and " << secondNum << " is " << result << endl;
			break;

		case 5:
			cout << "Thank you for using PixelPickle's calculator!" << endl;
			break;

		default:
			cout << "Invalid Choice! Try within the range of 1-4." << endl;
			break;
		}


		return 0;
	}

	while (choice != 5); // this is to keep the program running until the user selects 5 to exit
}