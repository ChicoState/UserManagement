#include "user.h"

User::User()
{


}

User::User(string username, string password, int id_num)
{
  m_username = username;
  m_password = password
  m_id_num = id_num
}

string User::get_username()
{
  return m_username;
}

string User::get_password()
{
  return m_id_num;
}


int User::get_id_num()
{
  return m_id_num;
}
