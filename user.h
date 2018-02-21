#ifndef USER_H
#define USER_H

class User
{
  public:
      User();
      void get_password();
      void get_name();
      void get_id_num();
  private:
      int id_num;
      string password;
      string name;
};
#endif
