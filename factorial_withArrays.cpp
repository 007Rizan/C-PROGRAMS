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
// same logic but different code 
/*#include<iostream>
#include<array>
using namespace std;


void productArray(array<int, 6>Array, int& result);

int main() {

	array<int, 6> Array = { 1, 2, 3, 4, 5, 6 };

	int finalProduct;

	productArray(Array, finalProduct);

	cout << "The product of the array elements is: " << finalProduct << endl;

	return 0;
}

void productArray(array<int, 6>Array, int& result) {

	result = 1;

	for (int a : Array) {
		result *= a;
	}

}*/
