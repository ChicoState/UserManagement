#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User 
{
 private:
  string username;
  string password;
  int id_num;
 public:
  User(string, string, int);
};

int main()
{
  string user, pass;
  int num = 0;
  vector <User> all;
  do
  {
    cout<<"Enter new username or q to quit: ";
    cin>>user;

    if( user != "q" && user != "Q" )
    {
      cout<<"\nEnter password: ";
      cin>>pass;
      User add(user, pass, ++num);
      //add.username = user;
      //add.password = pass;
      //add.id_num = ++num;
      all.push_back(add);
    }
  }while( user != "q" && user != "Q" );
  cout<<endl<<"Users created: "<<all.size()<<endl;

  return 0;
}


User::User(string uname, string pword, int ID) 
: username(uname), password(pword), id_num(ID)
{}


