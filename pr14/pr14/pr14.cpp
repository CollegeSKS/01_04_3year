//Создайте ПЕРВЫЙ ПРОЕКТ своего решения с заданным программным кодом, откомпилируйте и запустите его.

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	//объявляем массив из 8-ми элементов
	int array[8];
	//выводим номера элементов массива
	for (int i = 0; i < 8; i++)
	{
		cout << setw(3) << i;
	}
	cout << endl;
	//заполняем массив по формуле и выводим на консоль
	for (int i = 0; i < 8; i++)
	{
		array[i] = i * 2 + 1;
		cout << setw(3) << array[i];
	}
	cin.get();
	return 0;
}