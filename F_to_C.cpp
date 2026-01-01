#include<iostream>
#include<array>
using namespace std;


int main() {
	const int arraySize = 7;
	double fahrenheit[arraySize];

	for (int i = 0; i < arraySize; i++) {

		cout << "enter your tempreature in fahrenheit " << "for day "<<i + 1 << " :\n";
		cin >> fahrenheit[i];

	}
	for (double tempF : fahrenheit) {
		double tempC = (tempF - 32) * 5 / 9;
		cout << "your tempreture is\n " <<tempC << "C\n";

	}

	return 0;
}
 
