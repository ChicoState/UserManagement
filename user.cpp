#include <iostream>
#include "user.h"
#include <string>
using namespace std;

User::User(string s, string p, int id){
  username = s;
  password = p;
  id_num = id;
}
