/*
* @file: user.h
* @creator: Spiker, Jenn
* @date: 02/21/2018
*
* A simple class to create users.
*/


using namespace std;

class User {

  public:
    string username;
    string password;
    int id_num;
    User();
    User(string name, string pass, int id) {

      username = name;
      password = pass;
      id_num = id;

    };
    //~User();

};
