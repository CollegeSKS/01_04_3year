//Создайте ВТОРОЙ ПРОЕКТ своего решения, в котором задайте массив из 10 элементов. (Имя массива, закон его формирования и вывода на экран должны быть индивидуальны!!!)

#include <iostream>
using namespace std;

const int N=10;

int main() 
{ 
	int array[N];

	for (int i = 0; i < N; i++)
	{
		cout << i;
	}
	cout << endl; 

	for (int i = 0; i < N; i++)
	{
		array[i] = i * i/2;
		cout << array[i];
	}
	cin.get();
	return 0;
}