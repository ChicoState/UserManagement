#include <iostream>
#include <string>
#include <vector>
using namespace std;

Class User 
{
  private:
    string username;
    string password;
    int id_num;
    

  public:
    User();
    User(string username, string password, int id_num);
    void addUser(string username, string password);
};
vector <User> all;
