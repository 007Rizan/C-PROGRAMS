#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {

	public:
		Book(string author,string title,
			string genre ,int numpages);
		string getTitle() const;
		string getAuthor() const;
		string getGenre() const;
		int getNumPages() const;

private:
	    string author;
		string title;
		string genre;
		int numpages;


};
#endif BOOK_H
