#include <iostream>
#include "Animal.h"
using namespace std;


int main() {
	Animal myAnimal("Bob", 10.5);

	cout << "Animal Name: " << myAnimal.getName() << endl;
	cout << "Animal Weight: " << myAnimal.getWeight() << " kg" << endl;
	cout << "Animal Noise: " << myAnimal.makeNoise() << endl;
}
