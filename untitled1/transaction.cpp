//
// Created by Furkan Aşkın on 19.06.2024.
//
#include "Transaction.h"

Transaction::Transaction(std::string isbn, std::string userEmail, std::string type)
        : isbn(isbn), userEmail(userEmail), type(type) {}

std::string Transaction::getIsbn() const {
    return isbn;
}

std::string Transaction::getUserEmail() const {
    return userEmail;
}

std::string Transaction::getType() const {
    return type;
}
