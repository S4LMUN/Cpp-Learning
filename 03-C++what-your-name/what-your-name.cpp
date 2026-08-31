#include <iostream>
#include <string>

int main()
{
	std::string fullname;
	std::string nickname;
	int age;

	std::cout << "What's your full name : ";
	std::getline(std::cin, fullname);

	std::cout << "What's your nick name? : ";
	std::cin >> nickname;

	std::cout << "What your age? : ";
	std::cin >> age;

	std::cout << "Ohh you is " << fullname << " right?" << '\n';

	std::cout << "Nice to see you " << nickname << '\n';
	std::cout << "You are " << age << " years old" << '\n';

	return 0;
}
