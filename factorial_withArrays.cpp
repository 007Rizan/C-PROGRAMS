#include<iostream>
#include<array>
using namespace std;

int productArray(array<int,6>myArray);


int main() {
	int total = productArray({ 1,2,3,4,5,6 });

	cout << "The product of the array elements is: " << total << endl;

	return 0;

}

int productArray(array<int,6>myArray) {
	int product = 1;
	for (int i = 0; i < myArray.size(); i++) {
		product *= myArray[i];
	}
	return product;
}
