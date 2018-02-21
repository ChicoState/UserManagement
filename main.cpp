#include <iostream>
#include <string>
#include <vector>

#include "class.h"
#include "class.cpp"
using namespace std;



/*
struct User
{
  std::string username;
  std::string password;
  int id_num;
};
*/

int main()
{
  string user, pass;
  int id;
  int num = 0;
  vector <Class> all;
  do
  {
    /*
    cout<<"Enter new username or q to quit: ";
    cin>>user;
    */

    user = getUsername();

    if( user != "q" && user != "Q" )
    {
      pass = getPassword();
      Class add(user,pass,id);

  std::string user, pass;
  int num = 0;
  std::vector <User> all;
  do
  {
    std::cout<<"Enter new username or q to quit: ";
    std::cin>>user;

    if( user != "q" && user != "Q" )
    {
      std::cout<<"\nEnter password: ";
      std::cin>>pass;
      User add;

      add.username = user;
      add.password = pass;
      add.id_num = ++num;
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  std::cout<<std::endl<<"Users created: "<<all.size()<<std::endl;

  return 0;
}
