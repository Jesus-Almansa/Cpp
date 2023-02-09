#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K. Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "The Way of Kings";
    book2.author = "Brandom Sanderson";
    book2.pages = 1500;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}