//
// Created by Furkan Aşkın on 19.06.2024.
//
#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addUser(const User& user) {
    users.push_back(user);
}

void Library::borrowBook(const std::string& isbn, const std::string& userEmail) {
    for (Book& book : books) {
        if (book.getIsbn() == isbn && book.isAvailable()) {
            book.borrowBook();
            transactions.push_back(Transaction(isbn, userEmail, "borrow"));
            std::cout << "Book borrowed: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Book not available" << std::endl;
}

void Library::returnBook(const std::string& isbn, const std::string& userEmail) {
    for (Book& book : books) {
        if (book.getIsbn() == isbn && !book.isAvailable()) {
            book.returnBook();
            transactions.push_back(Transaction(isbn, userEmail, "return"));
            std::cout << "Book returned: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Book not borrowed" << std::endl;
}

void Library::displayBooks() const {
    std::cout << "Books in library:" << std::endl;
    for (const Book& book : books) {
        std::cout << book.getTitle() << " by " << book.getAuthor() << " (ISBN: " << book.getIsbn() << ") - "
                  << (book.isAvailable() ? "Available" : "Borrowed") << std::endl;
    }
}

void Library::displayUsers() const {
    std::cout << "Library users:" << std::endl;
    for (const User& user : users) {
        std::cout << user.getName() << " (Email: " << user.getEmail() << ")" << std::endl;
    }
}
