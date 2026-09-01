#include <iostream>

int main()
{
	int age;
	
	std::cout << "Enter your age : ";
	std::cin >> age;

	if(age >= 18){
		std::cout << "Hello Big Brother" << '\n';
	}

	else if(age < 0){
		std::cout << "Are you kidding me?" << '\n';
	}

	else{
		std::cout << "Hello Little Younger" << '\n';
	}

	return 0;
}
