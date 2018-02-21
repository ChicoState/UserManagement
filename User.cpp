#include"User.h"

void User::set_username(string new_username)
{
  username = new_username;
}

void User::set_password(string new_password)
{
  password = new_password;
}

void User::set_id_num(int new_id_num)
{
  id_num = new_id_num;
}

string User::get_username()
{
  return username;
}

string User::get_password()
{
  return password;
}

int User::get_id_num()
{
  return id_num;
}

