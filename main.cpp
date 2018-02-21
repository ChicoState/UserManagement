#include <iostream>
#include <string>
#include <vector>
#include <User.h>
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
      std::cout<<"\nEnter password: ";
      std::cin>>pass;
      User add;
      add.setUsername(user);
      add.setPassword(pass);
      add.setIdNum(++num);
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  std::cout<<std::endl<<"Users created: "<<all.size()<<std::endl;

  return 0;
}
