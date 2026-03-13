include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;


int main() {
	Dog dog("Rex", 20, "Labrador");
	Animal* dogPtr = new Dog("fido", 115, "Golden retiver");
	cout << "Make noise? " << dogPtr->makeNoise()<< endl;
	delete dogPtr;
	dogPtr = nullptr;
	cout << "Animal Name: " << dog.getName() << endl;
	cout << "Animal Weight: " << dog.getWeight() << " kg" << endl;
	cout << "Animal Noise: " << dog.makeNoise() << endl;

	
	dog.digHole();
	dog.chasecat();
	return 0;
}
