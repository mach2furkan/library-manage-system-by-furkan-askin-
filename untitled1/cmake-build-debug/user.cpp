//
// Created by Furkan Aşkın on 19.06.2024.
#include "User.h"
#include <string>

// Implementation of User class methods

User::User(std::string name, std::string email)
        : name(name), email(email) {}

std::string User::getName() const {
    return name;
}

std::string User::getEmail() const {
    return email;
}
