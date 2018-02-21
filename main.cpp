#include <iostream>
#include <string>
#include <vector>
#include"user.h"
using namespace std;


int main()
{
  string user, pass;
  int num = 0;
  vector <User*> all;
  do
  {
    cout<<"Enter new username or q to quit: ";
    cin>>user;

    if( user != "q" && user != "Q" )
    {
      cout<<"\nEnter password: ";
      cin>>pass;
      User* add = new User;
      add->add_user(user);
      add->add_password(pass);
      ++num;
      add->add_id(num);
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  cout<<endl<<"Users created: "<<all.size()<<endl;

  return 0;
}
