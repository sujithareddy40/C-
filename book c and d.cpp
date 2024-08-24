#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string publisher;
    double price;
    int pages;

public:
    // Constructor
    Book(string bTitle, string bAuthor, string bPublisher, double bPrice, int bPages) {
        title = bTitle;
        author = bAuthor;
        publisher = bPublisher;
        price = bPrice;
        pages = bPages;
        cout << "Book \"" << title << "\" created." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book \"" << title << "\" destroyed." << endl;
    }

    // Method to display book details
    void displayInfo() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: $" << price << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    // Creating a book object
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", 10.99, 218);

    // Displaying book information
    myBook.displayInfo();

    return 0;
}

