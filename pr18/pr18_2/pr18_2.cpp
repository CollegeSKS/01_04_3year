 
#include <iostream>


// любое из гласных кроме y - всегда возвращает 1
// У возвращает 1 только если в фукнцию передали 1, иначе 0
// любые другие символы возвращают 0
bool isFirstOperation(char c, bool yIsVowel)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    case 'y':
        return (yIsVowel ? true : false);
    default:
        return false;
    }
}

int main()
{
    std::cout << "Enter a vowel: ";
    char c;
    std::cin >> c;
    std::cout << "Enter another number: ";
    int d;
    std::cin >> d;
    std::cout <<isFirstOperation(c, d);
}

 