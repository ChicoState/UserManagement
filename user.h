#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
  public:
      User(string a_user, string pass, int id);
  private:
      int id_num;
      string password;
      string name;
};
#endif
