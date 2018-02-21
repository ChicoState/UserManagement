#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User 
{
  public:
  void add_user(string name);
  void add_password(string pass);
  void add_id(int num);

  private:
  string username;
  string password;
  int id_num;
};
#endif

void User::add_user(string name){
	username = name;
}

void User::add_password(string pass){
	password = pass;
}

void User::add_id(int num){
	id_num = num;
}

