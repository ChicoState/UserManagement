#include <iostream>
#include <string>
#include <vector>
#include "user.h"
using namespace std;

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
      cout<<"\nEnter password: ";
      cin>>pass;
      ++num;
      User add(user, pass, num);
//      add.addUsername(user);
 //     add.password = pass;
  //    add.id_num = ++num;
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
