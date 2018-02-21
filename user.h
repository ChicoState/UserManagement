#ifndef USER_H
#define USER_H

#include <iostream>
#include <string.h>

using namespace std;

class User
{
  public:
      User(string a_user, string pass, int id);
      void get_password();
      void get_name();
      void get_id_num();
  private:
      int id_num;
      string password;
      string name;
};
#endif
