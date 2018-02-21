#include <iostream>
#include <string>
#include <vector>
#include "class.h"
#include "class.cpp"
using namespace std;


/*
struct User
{
  string username;
  string password;
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
      add.username = user;
      add.password = pass;
      add.id_num = ++num;
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  cout<<endl<<"Users created: "<<all.size()<<endl;

  return 0;
}
