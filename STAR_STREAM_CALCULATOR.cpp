#include<iostream>
#include <string>
using namespace std;


char plan;
int device_number;
int total = 0;
int main() {
	cout << "*******welcome to stremstar******\n please enter your plan" << endl;
	cout << "We Have the following plans :\n *plan A\n *plan B\n *plan C" << endl;
	cout << "You can select your plan by typing the letter" << endl;
	cin >> plan;
	switch (plan) {
	case 'A':
	case'a':
		cout << "you have selected plan A" << endl;
		cout << "this plan includes 9 dollar each month\n include 1 device\n each additional deciece is 6 dollars." << endl;
		cout << "enter your device number" << endl;
		cin >> device_number;
		if (device_number < 0 || device_number >= 3) {
			cout << "please enter a valid number" << endl;
			break;
		}
		total = device_number * 6 + 9;
		cout << "your total amount is " << total << " dollar" << endl;

		break;
	case 'B':
	case 'b':
		cout << "this plan includes 14 dollar each monthNN\n include 3 device\n each additional deciece is 4 dollars" << endl;
		cout << "enter your device number" << endl;
		cin >> device_number;
		if (device_number < 0 || device_number >= 5) {
			cout << "please enter a valid number" << endl;
			break;
		}
		total = device_number * 4 + 14;
		cout << "your total amount is " << total << " dollar" << endl;
		break;
	case 'C':
	case 'c':
		cout << "this plan includes 15 dollar each month\n include 10 device\n each additional deciece is 2 dollars" << endl;
		cout << "enter your device number" << endl;
		cin >> device_number;
		if (device_number < 0 || device_number >= 12) {
			cout << "please enter a valid number" << endl;
			break;
		}
		total = device_number * 2 + 15;
		cout << "your total amount is " << total << " dollar" << endl;
		break;
	default :

			cout << "please enter a plan" << endl;
			break;
	}


	return 0;
}
