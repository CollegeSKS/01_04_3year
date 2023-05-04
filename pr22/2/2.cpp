//
//Написать программу, которая выводит сумму
//элементов массива целых чисел, введенного с клавиатуры.
//Количество элементов массива должно задаваться пользователем.
//Используйте динамический массив для решения.

#include <iostream>
using namespace std;

 
int main()
{
    int N;
    cout << "Input array size: ";
    cin >> N;

    int* arr = new int[N]; // создали динамический массив
    int sum = 0;
    cout << "Input elements of array";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout<< "Sum of elements = " << sum;

}
 