/* Heading
Sam Bryant - 09-25-17 period 2
Assignment Name : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int num_of_siblings;
	char middle_initial;
	bool same_middle_initial = false; //assume user does not have same middle inital
	float pi_guess;

	// acquire user data
	cout << "So how many siblings do you have? : ";
	cin >> num_of_siblings;
	cout << "What is your middle initial? : ";
	cin >> middle_initial;
	//Take in data for next calculation
	// recieve 3 numbers of the users choice and put them in an equation

	

	cout << "What do you think pi is? : ";
	cin >> pi_guess;

	int num1, num2, num3;
	cout << "For my next trick you shall give me three numbers and I will calulate the age in which you shall die.\n";
	cout << "Number 1 : ";
	cin >> num1; // take in first number
	cout << "Number 2 : ";
	cin >> num2; // take in second number
	cout << "Number 3 : ";
	cin >> num3; // take in third number

	// Find out what they think pi is:

	

	// compare data with held data and display appropriate text
	if (middle_initial == 'w' || middle_initial == 'W') {
		same_middle_initial = true; //user has same middle initial so the bool shall be true

	}
	if (num_of_siblings < 3) { // if siblings is less than 3, they dont have many.
		cout << "You have like barely any siblings. \n";
	}
	else { // else means that they dont have less than 3 so they have a lot of siblings so it will display that text.
		cout << "Wow, you have quite a lot of siblings. \n";
	}
	if (same_middle_initial == true) { // if middle initial stays true, it will display this text.
		cout << "That's cool, we have the same middle initial of W! \n";
	}
	else { // else, meaning something else is true, would mean that the bool is false so middle initial is not the same.
		cout << "We have different middle initials therefore we are enemies. \n";
	}

	// display pi guess :
	cout << "So you think pi is " << pi_guess << endl;
	

	

	// calculate day of death
	int calc1 = num1 + num2 - num3;
	int calc2 = num1 % num3;
	int calc3 = calc1 * num2 + calc2;
	int calc4 = calc3 % 1000;
	int calc5 = calc4 / 2;
	// calc5 would be the end number, these next cout statements display the equation in a readable form
	cout << "Ok, heres my calculations: " << num1 << " + " << num2 << " - " << num3 << " = " << calc1 << endl;
	cout << calc1 << " * " << num2 << " + " << num1 << " % " << num3 << " = " << calc3 << endl;
	cout << calc3 << " % " << "1000" << " = " << calc4 << endl;
	cout << calc4 << " / " << "2" << " = " << calc5 << endl;
	cout << "This means you will die at " << calc5 << " years old based on the numbers you thought of.\n"; // displays day of death and finishes the program

	cout << "Thank you for using my program" << endl; // Goodbye / end of program
	
	pause(); // pause statement showing that the program has ended.
}