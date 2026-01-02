#include<iostream>
#include<array>
using namespace std;

int countEvenNum(int arr[], int size);


int main() {
	
	int arrAy[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int numEven = countEvenNum(arrAy, 10);

	cout << "Number of even numbers in the array: " << numEven << endl;
	return 0;
}

int countEvenNum(int arr[], int size) {

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}

	return count;

}
