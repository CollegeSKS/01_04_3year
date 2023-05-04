// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    short value = 7; // &value = 0012FF60
    short otherValue = 3; // &otherValue = 0012FF54
    short* ptr = &value;
     cout << &value << '\n'; // 0012FF60
     cout << value << '\n'; // 7
     cout << ptr << '\n'; // 0012FF60
     cout << *ptr << '\n'; //7
     cout << '\n';
    *ptr = 9;
     cout << &value << '\n';// 0012FF60
     cout << value << '\n'; // 9
     cout << ptr << '\n'; // 0012FF60
     cout << *ptr << '\n';//9
     cout << '\n';
    ptr = &otherValue;
     cout << &otherValue << '\n'; //0012FF54
     cout << otherValue << '\n'; //3
     cout << ptr << '\n'; //0012FF54
     cout << *ptr << '\n';//3
     cout << '\n';
     cout << sizeof(ptr) << '\n';//8
     cout << sizeof(*ptr) << '\n';//2

}

 