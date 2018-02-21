#include <iostream>
using namespace std;

class User {
  public:
    void setUsername(string name) {username = name;}
    void setPassword(string pass) {password = pass;}
    void setId(int id) {id_num = id;}
  private:
    string username = "";
    string password = "";
    int id_num = 0;
};
