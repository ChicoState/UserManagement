#include <iostream>
#include <user.h>
#include <string>
#include <vector>
using namespace std;
    User(){
    this->username = " ";
    this->password = " ";
    this-> id_num = 0;

    }
    User(string username, string password, int id_num){
    this->username = username;
    this->password = password;
    this-> id_num = id_num;

    }
    void addUser(string username, string password){
      User add;
      add.username = user;
      add.password = pass;
      add.id_num = ++num;
      all.push_back(add);
    }
