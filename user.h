#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>

using namespace std;


class User {
  public:
    void set_user(string u);
    void set_pass(string p);
    void set_id(int i);
    string get_user();
    string get_pass();
    int get_id();

  private:
    string username;
    string password;
    int id_num;
};    


#endif
