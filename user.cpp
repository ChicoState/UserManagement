#include <string>
#include "user.h"
using namespace std;

User::User(string user, string pass, int id)
{
  m_username = user;
  m_password = pass;
  m_id_num = id;
}
