#include<iostream>
#include <string>
using namespace std;

int date;
char input;

int main() {
	cout << " enter a date in yyyy format: ";

	cin >> date;
	

	do {
		if (date % 400 == 0 || (date % 4 == 0 && date % 100 != 0)) {

			cout << "congratulations your year is a leap year :) thats unique!!!";

		}
		else {

			cout << "your year is not a leap year unfortunetly :(";
		}
		cout << "do you want to countinue(Yes:Y/No:N)";
		cin >> input;
	}

	while (input == 'y' || input=='Y');

	cout << "thanks for using leap year calculator: ";

	return 0;
}
