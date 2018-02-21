#include <iostream>
#include <string>
#include <vector>
#include <user.h>

using namespace std;

int main()
{
  string user, pass;
  int num = 0;

  do
  {
    cout<<"Enter new username or q to quit: ";
    cin>>user;

    if( user != "q" && user != "Q" )
    {
      cout<<"\nEnter password: ";
      cin>>pass;
      addUser(user,pass);
    }
  }while( user != "q" && user != "Q" );
  cout<<endl<<"Users created: "<<all.size()<<endl;

  return 0;
}
