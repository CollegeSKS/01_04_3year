// pr18_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

// символы перечисленные в кейсах возвращают 1, все остальное возвращает 0
bool isLowerVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

// функция для автоматического тестирования фунцкии isLowerVowel
int test()
{
    if (isLowerVowel('a') != true) return 1;
    if (isLowerVowel('q') != false) return 2;
    return 0;
}

// вызываем функцию для тестирования
int main()
{
    std::cout << test();
}  