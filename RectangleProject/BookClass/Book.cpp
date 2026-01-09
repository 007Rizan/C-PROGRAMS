#include "Book.h"
Book::Book(string author,string title,
			string genre ,int numpages)
			{
	           this->author=author;
				this->title=title;
				this->genre=genre;
				this->numpages = numpages;
}
string Book::getTitle() const {
	return title;
}
string Book::getAuthor() const {
	return author;
}
string Book::getGenre() const {
	return genre;
}
int Book::getNumPages() const {
	return numpages;
}
