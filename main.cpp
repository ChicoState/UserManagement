#include <iostream>
#include <string>
#include <vector>
#include "User.h"

using namespace std;

int main()
{
  string users, pass;
  int num = 0;
  vector <User> all;
  do
  {
    cout<<"Enter new username or q to quit: ";
    cin>>users;

    if( users != "q" && users != "Q" )
    {
      cout<<"\nEnter password: ";
      cin>>pass;
      User add;
      add.set_username(users);
      add.set_password(pass);
      add.set_id_num(++num);
      all.push_back(add);
    }
  }while( users != "q" && users != "Q" );
  cout<<endl<<"Users created: "<<all.size()<<endl;

  return 0;
}
