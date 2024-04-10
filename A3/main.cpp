#include <iostream>
using namespace std;

int gcd(int, int);

int main() {
	char choice;
	do {
		int num1 = 0;
		int num2 = 0;

		cout << "Please enter two numbers to find the greatest common divisor\n";

		// get user input and validate first number
		cout << "Number 1: ";
		if (!(cin >> num1)) {
			cout << "\nInvalid value for first number\n";
			cout << "Return code: -1\n";
			break;
		}

		// get user input and validate second number
		cout << "Number 2: ";
		if (!(cin >> num2)) {
			cout << "\nInvalid value for second number\n";
			cout << "Return code: -1\n";
			break;
		}
		cout << endl;

		// calculate gcd
		cout << "The gcd is: " << gcd(num1, num2) << endl;
		cout << "Return code: 0\n\n";

		// ask to run again
		cout << "Would you like to run again? (y/n): "; cin >> choice;
		cout << endl;

	} while (choice == 'y');

	return 0;
}

int gcd(int num1, int num2) {
	// everything divides zero
	if (num1 == 0)
		return num2;
	if (num2 == 0)
		return num1;

	// return final gcd when both numbers equal eachother
	if (num1 == num2)
	{
		return num1;
	}

	// subtract smaller number from larger number using the euclidean algorithm
	if (num1 > num2)
		return gcd(num1 - num2, num2);
	else
		return gcd(num1, num2 - num1);
}