#include <string>

using std::string;

class User 
{
  public:
    void set_username(string new_username);
    void set_password(string new_password);
    void set_id_num(int new_id_num);
    string get_username();
    string get_password();
    int get_id_num();
  private:
    string username;
    string password;
    int id_num;
};
