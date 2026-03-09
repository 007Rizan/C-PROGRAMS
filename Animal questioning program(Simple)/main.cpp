#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;


int main() {
	Animal myAnimal("Bob", 10.5);
	Dog dog("Rex", 20, "Labrador");
	cout << "Animal Name: " << myAnimal.getName() << endl;
	cout << "Animal Weight: " << myAnimal.getWeight() << " kg" << endl;
	cout << "Animal Noise: " << myAnimal.makeNoise() << endl;

	cout << "Animal Name: " << dog.getName() << endl;
	cout << "Animal Weight: " << dog.getWeight() << " kg" << endl;
	cout << "Animal Noise: " << dog.makeNoise() << endl;

	
	dog.digHole();
	return 0;
}
