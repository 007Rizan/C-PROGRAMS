#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	char userMove;
	char input;

	srand(time(nullptr));
	cout << "Welcome to Rock, Paper, Scissors!\n" << endl;
	do {
		cout << "Enter your move (R, P, S): \n";
	cin >> userMove;

	int randomNum = rand() % 3;

	
		if (randomNum == 0) {
			cout << "computer dicision is : R\n";


		}
		else if (randomNum == 1) {
			cout << "computer dicision is : P\n";
		}
		else {
			cout << "computer dicision is : S\n";
		}

		if ((userMove == 'R' && randomNum == 0) || (userMove == 'P' && randomNum == 1) || (userMove == 'S' && randomNum == 2)) {

			cout << "its a tie\n";

		}
		else if ((userMove == 'S' && randomNum == 1) || (userMove == 'P' && randomNum == 0) || (userMove == 'R' && randomNum == 2)) {

			cout << "you win :)\n";

		}
		else if ((userMove == 'S' && randomNum == 1) || (userMove == 'P' && randomNum == 0) || (userMove == 'R' && randomNum == 2)) {
			cout << "you lose :(\n";
		}
		cout << "Do you want to continue:\n ";
		cin >> input;

	} while (input == 'Y' || input == 'y');
	
	return 0;
	
}
