#include"user.h"

void User::set_user(string u){
  username = u;
}
void User::set_pass(string p){
  password = p;
}
void User::set_id(int i){
  id_num = i;
}

string User::get_user(){
  return username;
}
string User::get_pass(){
  return password;
}
int User::get_id(){
  return id_num;
}



