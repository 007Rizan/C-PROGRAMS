#include<iostream>
#include"Rectangle.h"
using namespace std;

int main() {
	Rectangle r1;
	Rectangle r2(3.0, 4.0);

	cout << "r1 area is  now: " << r1.area() << endl;
	cout << "r1 area is  now: " << r1.area() << endl;
	
	r1.setLength(5.0);
	r2.setLength(6.0);

	cout << "r1 length is now: " << r1.getLength() << endl;
	cout << "r1 width is now: " << r1.getWidth() << endl;

	cout << "r1 area is now: " << r1.area() << endl;

	return 0;


}
