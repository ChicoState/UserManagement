#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

using namespace std;

class User
{
  public:
    User(string user, string pass, int id);
    ~User();
  private:
    string username;
    string password;
    int id_num;
};

#endif
