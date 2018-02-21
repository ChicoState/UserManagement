#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef CLASS_H
#define CLASS_H

class Class
{
private:
  string username;
  string password;
  int id_num;

public:
  Class(string u, string p, int i);
  string getUsername();
  string getPassword();

};

#endif
