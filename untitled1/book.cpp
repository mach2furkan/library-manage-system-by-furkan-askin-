//
// Created by Furkan Aşkın on 19.06.2024.
//
#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn)
        : title(title), author(author), isbn(isbn), available(true) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getIsbn() const {
    return isbn;
}

bool Book::isAvailable() const {
    return available;
}

void Book::borrowBook() {
    available = false;
}

void Book::returnBook() {
    available = true;
}
