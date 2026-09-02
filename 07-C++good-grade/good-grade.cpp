#include <iostream>

int main()
{
	char grade;

	std::cout << "What letter grade? : ";
	std::cin >> grade;

	switch(grade){
		case 'A':
			std::cout << "You did great!" << '\n';
			break;
		case 'B':
			std::cout << "You did good" << '\n';
			break;
		case 'C':
			std::cout << "You did okay" << '\n';
			break;
		case 'D':
			std::cout << "You did not do good" << '\n';
			break;
		case 'F':
			std::cout << "You Failed!" << '\n';
			break;
		default:
			std::cout << "Please only enter in a letter grade (A-F)" << '\n';
	}

	return 0;
}
