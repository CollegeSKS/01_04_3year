//1. Написать программу, которая вводит с клавиатуры одномерный массив из 10 целых чисел, после чего выводит количество ненулевых элементов.Перед вводом каждого элемента должна выводиться подсказка с номером элемента.


#include <iostream>
using namespace std;

const int N = 10;

int main()
{
	int array[N];

	for (int i = 0; i < N; i++)
	{
		cout << i<<": ";
		cin >> array[i];
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += array[i] != 0 ? 1 : 0;
	}
	cout << "There are " << sum << " elements that are not zero";
	cin.get();
	return 0;
}