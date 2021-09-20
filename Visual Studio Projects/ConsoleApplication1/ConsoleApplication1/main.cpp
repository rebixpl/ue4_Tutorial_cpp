// C++ Tutorial for Beginners - Full CourseC++ Tutorial for Beginners - Full Course
// https://www.youtube.com/watch?v=vLnPwxZdW4Y

#include <iostream>
#include <cmath>
#include <string>

// Function Declaration
void sayHi(std::string name, int age);

int main()
{
	sayHi("Bob", 32);

	// STRINGS
	const char grade = 'A';
	std::string phrase = "Hello World";

	std::cout << phrase.length() << "\n";

	phrase[3] = grade;
	std::cout << phrase[3] << "\n";
	std::cout << phrase.substr(6, 3) << "\n";
	std::cout << phrase.find("World", 0) << "\n";

	std::string color;
	std::getline(std::cin, color); // get line of text
	std::cout << "Color: " + color << "\n";

	// NUMBERS
	std::cout << pow(2, 3) << "\n";
	std::cout << sqrt(36) << "\n";
	std::cout << round(3.5) << "\n";
	std::cout << ceil(3.2) << "\n";
	std::cout << floor(3.2) << "\n";
	std::cout << fmax(3.2, 5.3) << "\n"; // return which number is bigger

	// ARRAYS
	int luckyNumbers[10] = { 3,13,5,7,19,8 };
	luckyNumbers[9] = 2137;
	std::cout << luckyNumbers[9] << "\n";

	int numberGrid[3][2] = {
		{2,6},
		{8,2},
		{5,1},
	};

	std::cout << numberGrid[2][0] << "\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << numberGrid[i][j];
		}
	}
	std::cout << "\n";

	// Pointers (memory addresses)
	int num1 = 123;
	int* pNum1 = &num1; // Pointer variable which stores address of num1 variable
	std::string str1;
	std::string* pStr1 = &str1;

	std::cout << "&num1: " << &num1 << "\n";
	std::cout << "pNum1: " << pNum1 << "\n";
	std::cout << "&str1: " << &str1 << "\n";
	std::cout << "pStr1: " << pStr1 << "\n";
	std::cout << "*pNum1: " << *pNum1 << "\n"; // dereferencing a pointer ( getting value from the memory address the pointer was storing )
	// *pNum1 = 123
	// pNum1 = 00C2F764
	std::cout << "*&num1: " << *&num1 << "\n";

	return 0;
}

// Function Definition
void sayHi(std::string name, int age)
{
	std::cout << "My name's " + name << ". My age is " << std::to_string(age) << "\n";
}