#include <string>
#ifndef USER_H
#define USER_H
using namespace std;
class User
{
  private:
    string m_username;
    string m_password;
    int m_id_num;
  public:
    User(string user, string pass, int id);
};
#endif
