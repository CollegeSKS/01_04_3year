//
//Задайте динамический массив из N элементов(количество элементов задается
//    пользователем, элементы вводятся с клавиатуры).Выполните сортировку элементов с
//    помощью функции std::sort()

#include <iostream>
#include <algorithm> // для std::sort()
using namespace std;
int main()
{
    int N;
    cout << "Input array size: ";
    cin >> N;

    int* arr = new int[N]; // создали динамический массив
     

    cout << "Input elements of array";
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; 
    }

    sort(arr, arr + N); 
    cout << "Sorted array : ";
    for (int i = 0; i < N; i++) {
        cout <<  arr[i]<< " - ";
    }

    delete[] arr; //освободить занимаемую память
}

 