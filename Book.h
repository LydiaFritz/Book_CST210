#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;
class Book {
private:
	string title;
	string author;
	string isbn;
	int year;
	bool available;
public:
	Book(string, string, string, int);
	//copy constructor
	Book(const Book& rhs);

	void setTitle(string);
	void setAuthor(string);
	void setISBN(string);
	void setYear(int);
	void checkIn();
	void checkOut();

	string getTitle() const;
	string getAuthor() const;
	string getISBN() const;
	int getYear() const;
	bool isAvailable() const;

	//compare this book with rhs
	//return true if isbn are equal, false otherwise
	bool operator==(const Book& rhs) {
		return this->isbn == rhs.isbn;
	}

	friend ostream& operator<<(ostream& out, const Book& rhs);


};
#endif