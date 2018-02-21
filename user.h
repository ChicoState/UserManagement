#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class User
{
  public:
    User(string username, string password, int id_num); // Constructor

    // Get
    string get_username();
    string get_password();
    int get_id_num();

    // Set
    void set_username(string value);
    void set_password(string value);
    void set_id_num(int value);
    
  private:    
    string m_username;
    string m_password;
    int m_id_num;
};
#endif
