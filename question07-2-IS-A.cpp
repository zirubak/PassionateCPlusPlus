#include <iostream>
#include <cstring>

using namespace std;

class Book
{
private:
	char* title;	//책의 제목
	char* isbn;	//국제표준도서번호
	int price; 	//책의 가격

public:
	Book(char* newTitle, char* newISBN, int newPrice)
		:price(newPrice)
	{
		title = new char[strlen(newTitle)+1];
		isbn = new char[strlen(newISBN)+1];
		strcpy(title, newTitle);
		strcpy(isbn, newISBN);
	}

	void ShowBookInfo()
	{
		cout << "Title: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "Price: " << price << endl;
	}

	~Book()
	{
		delete []title;
		delete []isbn;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;	//보안키

public:
	EBook(char* newTitle, char* newISBN, int newPrice, char* NewDRMKey)
		:Book(newTitle, newISBN, newPrice)
	{
		DRMKey = new char[strlen(NewDRMKey)+1];
		strcpy(DRMKey, NewDRMKey);
	}

	void ShowEbbokInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}

	~EBook()
	{
		delete []DRMKey;
	}
};

int main(void)
{
	Book book("Good C++", "1231-12311-12344", 200);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("Good C++ ebook", "234-553-2341", 100, "sdfswe213fs");
	ebook.ShowEbbokInfo();
	return 0;
}











