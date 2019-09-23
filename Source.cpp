#include <iostream>
#include <vector>
#include "Book.h"

using namespace std;

int main() {

	//create a book
	Book myBook("Charlotte\'s Web", "E. B. White", "1-2345-34567-Z", 1952);

	cout << myBook << endl;

	//change the title
	myBook.setTitle("Stuart Little");
	//check the book out
	myBook.checkOut();

	cout << myBook << endl;

	Book another("What Is The Name Of This Book?", "Raymond M. Smullyan", "978-0-486-48198-2", 1978);
	cout << another << endl;

	if (myBook == another)
		cout << myBook.getTitle() << " == " << another.getTitle() <<endl;
	else
		cout << myBook.getTitle() << " != " << another.getTitle() << endl;

	if (myBook == myBook)
		cout << myBook.getTitle() << " == " << myBook.getTitle() << endl;
	else
		cout << myBook.getTitle() << " != " << myBook.getTitle() << endl;

	another.checkOut();
	Book yetAnother(another);
	cout << yetAnother << endl;

	vector<Book> library;
	library.push_back(myBook);
	library.push_back(another);
	library.push_back(yetAnother);

	for (int i = 0; i < library.size(); i++)
		cout << library[i].getTitle() << endl;

	return 0;
}