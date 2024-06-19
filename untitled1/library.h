//
// Created by Furkan Aşkın on 19.06.2024.
//
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"
#include "Transaction.h"

class Library {
public:
    void addBook(const Book& book);
    void addUser(const User& user);
    void borrowBook(const std::string& isbn, const std::string& userEmail);
    void returnBook(const std::string& isbn, const std::string& userEmail);
    void displayBooks() const;
    void displayUsers() const;

private:
    std::vector<Book> books;
    std::vector<User> users;
    std::vector<Transaction> transactions;
};

#endif
