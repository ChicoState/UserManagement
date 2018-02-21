#ifndef USER_H_
#define USER_H_

#include <string>

using namespace std;

class User {

 public:
   string get_username();
   string get_password();
   int get_id_num();

   void set_username(string);
   void set_password(string);
   void set_id_num(int);

 private:
   string username;
   string password;
   int id_num;

};

#endif
