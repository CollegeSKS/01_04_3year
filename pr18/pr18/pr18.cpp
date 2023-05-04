#include <iostream>
#include <string>

// функция для опредедения какое из двух чисел больше
void compare(int c, int d)
{
	if (c > d)
		std::cout << c << " is greater than " << d << '\n'; // случай №1
	else if (c < d)
	std::cout << c << " is less than " << d << '\n'; // случай №2
	else
		std::cout << c <<" is equal to " << d << '\n'; // случай №3
}

int main()
{
	std::cout << "Enter a number: ";
	int c;
	std::cin >> c;
	std::cout << "Enter another number: ";
	int d;
	std::cin >> d;
		compare(c, d);
}