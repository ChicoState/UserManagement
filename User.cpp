#include <User.h>

void User::setUsername(string user)
{
  m_username = user;
}

void User::setPassword(string pass)
{
  m_password = pass;
}

void User::setIdNum(int id)
{
  m_id = id;
}

string User::getUsername()
{
  return m_username;
}

string User::getPassword()
{
  return m_password;
}

int User::getIdNum()
{
  return m_id;
}
