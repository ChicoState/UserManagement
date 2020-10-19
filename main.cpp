#include <iostream>
#include <string>
#include <vector>

struct User 
{
  std::string username;
  std::string password;
  int id_num;
};

int main()
{
  std::string user, pass;
  int num = 0;
  std::vector <User> all;
	while (true)
	{
		std::cout << "Enter new username or q to quit: ";
		std::cin >> user;

		if (user != "q" || user != "Q")
		{
			std::cout << "\nEnter password: ";
			std::cin >> pass;
			User add;
			add.username = user;
			add.password = pass;
			add.id_num = ++num;
			all.push_back(add);
		}
		else 
		{
			break;
		}
	}
  std::cout<<std::endl<<"Users created: "<<all.size()<<std::endl;

  return 0;
}
