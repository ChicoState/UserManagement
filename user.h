#define USER_H_
#ifndef USER_H_

class User {

public:

  User();
  User(string username, string password, int id)
  string get_username();
  string get_password();
  int get_id_num();


private:
  string m_username;
  string m_password;
  int m_id_num;





};

#endif 
