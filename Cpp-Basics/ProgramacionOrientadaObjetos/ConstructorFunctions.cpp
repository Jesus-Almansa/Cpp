#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {

    Book book1("Harry Potter", "J.K. Rowling", 500);

    Book book2("The Way of the Kings", "Brandom Sanderson", 1500);

    Book book3;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    cout << book3.title << endl;
    return 0;
}