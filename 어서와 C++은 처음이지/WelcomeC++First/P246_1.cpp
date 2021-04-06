#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	string author;
public:
	Book();
	Book(string t, string a);
	string getTitle() { return title; }
	string getAuthor(){ return author;}
	void setTitle(string t) { title = t; }
	void setAuthor(string a) { author = a; }
};

Book::Book()
{

}

Book::Book(string t, string a)
{
	title = t;
	author = a;
}

int main()
{
	Book book;
	Book("Great C++", "Bob");
	book.setTitle("Great C++");
	book.setAuthor("Bob");
	cout << "책 이름 : " << book.getTitle() << endl;
	cout << "책 저자 : " << book.getAuthor() << endl;

	return 0;
}