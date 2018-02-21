#include "user.h"

// Get
string User::get_username()
{
    return m_username;
}

string User::get_password()
{
    return m_password;
}

int User::get_id_num()
{
    return m_id_num;
}

// Set
void User::set_username(string value)
{
    m_username = value;
}

void User::set_password(string value)
{
    m_password = value;
}

void User::set_id_num(int value)
{
    m_id_num = value;
}