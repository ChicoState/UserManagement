#include <iostream>
#include <string>
#include <vector>
#include "user.h"
using namespace std;


struct User 
{
  std::string username;
  std::string password;
  int id_num;
};

int main()
{
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
      add.set_username(user);
      add.set_password(pass);
      add.set_id_num(++num);
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  std::cout<<std::endl<<"Users created: "<<all.size()<<std::endl;

  return 0;
}
