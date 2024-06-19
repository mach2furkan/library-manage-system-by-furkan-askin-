//
// Created by Furkan Aşkın on 19.06.2024.
//
#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(std::string name, std::string email);

    std::string getName() const;
    std::string getEmail() const;

private:
    std::string name;
    std::string email;
};

#endif
