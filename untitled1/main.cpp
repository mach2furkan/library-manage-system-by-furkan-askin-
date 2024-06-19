
    #include <iostream>
#include "Library.h"

int main() {
    Library library;

    library.addBook(Book("1984", "George Orwell", "1234567890"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", "1234567891"));

    library.addUser(User("John Doe", "john@example.com"));
    library.addUser(User("Jane Smith", "jane@example.com"));

    library.borrowBook("1234567890", "john@example.com");
    library.returnBook("1234567890", "john@example.com");

    library.displayBooks();
    library.displayUsers();

    return 0;
}
