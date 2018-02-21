#include "user.h"

string User::get_username() {
   return username;
}

string User::get_password() {
   return password;
}

int User::get_id_num() {
   return id_num;
}

void User::set_username(string name) {
   username = name;
}

void User::set_password(string pass) {
   password = pass;
}

void User::set_id_num(int id) {
   id_num = id;
}
