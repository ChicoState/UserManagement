#include <string>

class User{
    public:
        User();
        std::string getUsername();
        std::string getPassword();
        int getId();
        void setUsername(std::string new_name);
        void setPassword(std::string new_pass);
        void setId(int new_id);
    private:
        std::string m_username;
        std::string m_pass;
        int m_id;
};