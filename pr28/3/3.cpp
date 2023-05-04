

//Создайте статический массив name[12].Элементы массива вводятся с клавиатуры.
//Найдите все четные значения массива и выведите их на консоль.
//(name – ваше имя, например marina)

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	const int N = 12;
	int veya[N];

	for (int i = 0; i < N; i++) {
		cin>> veya[i];
	}
	 
	//четные значения массива
	for (int i = 0; i < N; i++) {
		if(veya[i]%2==0) cout << veya[i] << " - ";
	}
}