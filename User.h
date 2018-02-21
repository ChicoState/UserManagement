#include <main.cpp>

#ifndef USER_H
#define USER_H

class User
{
  public:
    void setUsername();
    void setPassword();
    void setIdNum(int id);
    string getUsername();
    string getPassword();
    int getIdNum();
    
  private:
    string m_username;
    string m_password;
    int m_id;
    
};
#endif
