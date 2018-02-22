#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{

    private:
        string username;
        string password;
        int id_num;

    public:
        User(string, string, int);
        ~User() { password = "00000000000"; }

        //Accessors
        string getUserName() { return username; }
        int getID() { return id_num; }

};

#endif // USER_H
