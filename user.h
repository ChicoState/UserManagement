#include <iostream>
#include <string>

using namespace std;

class User{
  private:
    string username;
    string password;
    int id_num;
  public:
    string get_name();
    string get_password(string name);
    int get_id(string name);
    User(string s, string p, int id);
};
