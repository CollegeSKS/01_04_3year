﻿
//Создайте многопоточный код, используя структуру if - else для индивидуальной
//задач
// 12 вариант - 3

//Оператор вводит число.Определить, четно оно или нечетно, и вывести
//ответ на консоль.

#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a % 2 != 0) cout << "Нечетное число" << endl; // 1  поток
	else cout << "четное число" << endl;// 2  поток
	return 0;
}