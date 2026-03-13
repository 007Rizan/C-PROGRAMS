#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;



Dog::Dog(string name, double weight, string breed) :Animal(name,weight){
	this->breed = breed;
}

string Dog::getBreed() const {
	return breed;
}
void Dog::digHole() const{
	cout << "Digging a hole!" << endl;

}
string Dog::makeNoise() const {
	return "Woof!";
}
string Dog::chasecat() const {
	return "Chasing a cat!";
}
