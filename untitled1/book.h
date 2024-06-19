//
// Created by Furkan Aşkın on 19.06.2024.
//

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(std::string title, std::string author, std::string isbn);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
    bool isAvailable() const;
    void borrowBook();
    void returnBook();

private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;
};

#endif
