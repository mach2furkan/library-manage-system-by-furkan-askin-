//
// Created by Furkan Aşkın on 19.06.2024.
//
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    Transaction(std::string isbn, std::string userEmail, std::string type);

    std::string getIsbn() const;
    std::string getUserEmail() const;
    std::string getType() const;

private:
    std::string isbn;
    std::string userEmail;
    std::string type; // borrow or return
};

#endif
