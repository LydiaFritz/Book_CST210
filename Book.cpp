#include "Book.h"

Book::Book(string t, string a, string isbn, int year)
{
	this->title = t;
	this->author = a;
	this->isbn = isbn;
	this->year = year;
	available = true;
}

Book::Book(const Book& rhs)
{
	this->author = rhs.author;
	this->title = rhs.title;
	this->year = rhs.year;
	this->isbn = rhs.isbn;
	this->available = true;
}

void Book::setTitle(string t)
{
	title = t;
}

void Book::setAuthor(string a)
{
	author = a;
}

void Book::setISBN(string isbn)
{
	this->isbn = isbn;
}

void Book::setYear(int y)
{
	this->year = y;
}

void Book::checkIn()
{
	this->available = true;
}

void Book::checkOut()
{
	this->available = false;
}

string Book::getTitle() const
{
	return title;
}

string Book::getAuthor() const
{
	return author;
}

string Book::getISBN() const
{
	return isbn;
}

int Book::getYear() const
{
	return year;
}

bool Book::isAvailable() const
{
	return available;
}

ostream& operator<<(ostream& out, const Book& rhs)
{
	out << rhs.title << '\n' << rhs.author << '\n' << rhs.isbn << '\n' << rhs.year << '\n';
	out << "This book is ";
	if (rhs.available)
		out << "checked in" << endl;
	else
		out << "checked out" << endl;
	return out;
}
