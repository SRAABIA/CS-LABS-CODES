#include <iostream>
using namespace std;
class Book
{
    string books_name, authors_name, publisher;
    string ISBN;

public:
    Book()
    {
        books_name = "book1";
        authors_name = "new";
        publisher = "old";
        ISBN = "1234";
    }
    Book(string books_name, string authors_name, string publisher, string ISBN)
    {
        this->books_name = books_name;
        this->authors_name = authors_name;
        this->publisher = publisher;
        this->ISBN = ISBN;
    }
    void setter_book_name(string books_name)
    {
        this->books_name = books_name;
    }
    void setter_authors_name(string authors_name)
    {
        this->authors_name = authors_name;
    }
    void setter_publisher(string publisher)
    {
        this->publisher = publisher;
    }
    void setter_isbn(string ISBN)
    {
        this->ISBN = ISBN;
    }
    string getter_book_name()
    {
        return books_name;
    }
    string getter_authors_name()
    {
        return authors_name;
    }
    string getter_publisher()
    {
        return publisher;
    }
    string getter_isbn()
    {
        return ISBN;
    }

    void getBookInfo(int i)
    {
        cout << endl << "-----------------------------------------------------------" << endl;
        cout << "Book NO." << i << endl << endl;
        cout << "Book's Name:   " << getter_book_name() << endl;
        cout << "Author's Name: " << getter_authors_name() << endl;
        cout << "ISBN:      " << getter_isbn() << endl;
        cout << "Published By:  " << getter_publisher() << endl;
    }
};

int main()
{
    Book BookTest[5] = {
        Book("Let Us C", "Yashavant Kanetkar", "Best Sellers", "978-1-56619-909-4"),
        Book("C++ For C Programmers", "Ira Pohl", "Benajmin Publishers", "9-780805-331592"),
        Book("Problem Solving With C++ ", "Walter Savitch", "PEARSON", "978-1-4028-9462-6"),
        Book("Differential Equations", "Shepley L. Ross", "Wiley Publishers", "9812-53-109-2"),
        Book("Applied Physics", "John Berg", "Dutch Publishers", "1-4028-9462-7"),
    };
    cout << "Enter Book's Information: " << endl;
    int i;
    string a[5], b[5], c[5], d[5];
    for (i = 0; i < 5; i++)
    {
        cout << endl << "-----------------------------------------------------------";
        cout << endl << "Book " << i+1;
        cout << endl << "-----------------------------------------------------------" << endl;

        cout << "Enter Book's Name:   ";
        cin >> a[i];
        BookTest[i].setter_book_name(a[i]);
        cout << "Enter Author's Name: ";
        cin >> b[i];
        BookTest[i].setter_authors_name(b[i]);
        cout << "Enter ISBN:      ";
        cin >> c[i];
        BookTest[i].setter_isbn(c[i]);
        cout << "Enter Published By:  ";
        cin >> d[i];
        BookTest[i].setter_publisher(d[i]);
    }
    int g;
    cout << endl << "-----------------------------------------------------------" << endl;
    cout << endl << "Enter the Desired Book number(1-5) to get the info: ";
    cin >> g;
    BookTest[g - 1].getBookInfo(g);
    cout << "----------------------------XX-------------------------------";
    return 0;
}