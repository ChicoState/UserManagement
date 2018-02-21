#include "class.h"

Class::Class(string u,string p, int i)
{
  username = u;
  password = p;
  id_num = i;
}

string Class::getUsername()
{
  string user;
  cout<<"Enter new username or q to quit: ";
  cin>>user;
  return user;
}

string Class::getPassword()
{
  string pass;
  cout<<"\nEnter password: ";
  cin>>pass;
  return pass;
}
