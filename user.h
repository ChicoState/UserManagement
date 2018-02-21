#ifndef USER_H
#define USER_H
#include<iostream>

using namespace std;

class User
{

    public:
        User();
        ~User();
        string username;
        string password;
        int id_num;
};
#endif
