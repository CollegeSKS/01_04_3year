﻿
//Создайте стек name[12].Элементы стека вводятся с клавиатуры.Найдите среднее
//значение элементов стека.
//(name – ваше имя, например marina)

#include <iostream>  
#include <stack> 
using namespace std;

 
int main()
{
	const int N = 12;
	stack<int> veya[N];
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		veya->push(temp);
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum+= veya->top();
		veya->pop();
	}

	cout << "Среднее значение = " << sum / 12;
}
 