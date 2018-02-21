#include "user.h"

User::User(){
    this->m_username = "";
    this->m_pass = "";
    this->m_id = -1;
}


int User::getId() {
    return this->m_id;
}

std::string User::getUsername() {
    return this->m_username;
}

std::string User::getPassword() {
    return this->m_pass;
}

void User::setId(int new_id) {
    this->m_id = new_id;
}

void User::setPassword(std::string new_pass) {
    this->m_pass = new_pass;
}

void User::setUsername(std::string new_username) {
    this->m_username = new_username;
}