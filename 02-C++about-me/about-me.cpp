#include <iostream>
#include <string>

int main() {

	//integer (whole number)
	int age = 15;
	int year = 2011;

	//double (number including decimal)
	double height = 172.5;
	double gpa = 3.95;

	//single character
	char grade = 'A';

	//boolean (true or false)
	bool student = true;

	//string (objects that represents a sequence of text)
	std::string name = "Friendship";
	std::string day = "Sunday ";
	std::string food = "Hamburger";
	std::string address = "123 Fake St.";

	std::cout << "Hello Guy (:" << '\n';
	std::cout << "My name is    | " << name << '\n';
	std::cout << "I'm           | " << age << " Years Old" << '\n';
	std::cout << "I born in     | " << day << year << '\n';
	std::cout << "My height     | " << height << " cm" << '\n';
	std::cout << "My gpa        | " << gpa << ", " << grade << '\n';
	std::cout << "Student       | " << student << '\n';
	std::cout << "Favorite food | " << food << '\n';
	std::cout << "Address       | " << address << '\n';

	return 0;
}
