#include<iostream>
#include"Book.h"

using namespace std;

void printBookDetails(const Book& book);


int main() {
	Book gameofthrones("George R. R. Martin", 
		"A Game of Thrones", 
		"Fantasy", 694);

	Book nineteenEightyFour("George Orwell", 
		"Nineteen Eighty-Four", 
		"Dystopian", 328);

	Book cppBook("Bjarne Stroustrup", 
		"The C++ Programming Language", 
		"Programming", 1376);
	printBookDetails(gameofthrones);
	printBookDetails(nineteenEightyFour);
	printBookDetails(cppBook);

	return 0;
}
void printBookDetails(const Book& book) {
	cout << "Title: " << book.getTitle() << endl;
	cout << "Author: " << book.getAuthor() << endl;
	cout << "Genre: " << book.getGenre() << endl;
	cout << "Number of Pages: " << book.getNumPages() << endl;
}
