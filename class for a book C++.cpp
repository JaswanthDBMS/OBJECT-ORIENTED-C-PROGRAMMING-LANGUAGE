#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    Book(const std::string &bookTitle, const std::string &bookAuthor) 
        : title(bookTitle), author(bookAuthor) {
        std::cout << "Book '" << title << "' by " << author << " is created." << std::endl;
    }

    ~Book() {
        std::cout << "Book '" << title << "' by " << author << " is destroyed." << std::endl;
    }

    void displayInfo() const {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    
    book1.displayInfo();
    
    return 0;
}

