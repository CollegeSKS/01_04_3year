
//Задайте массив целочисленный FIO[10], где FIO – ваши инициалы.Элементы
//массива задайте вводом с клавиатуры.Передайте элементы массива в функцию
//printMass(), которая выводит на консоль все элементы массива.

#include <iostream>
using namespace std;

void printMass(int* arr, int N) {
    for (int i = 0; i < N; i++) cout << arr[i] << " - ";
}
int main()
{
    const int N = 10;
    int MVA[N];

    cout << "Input elements of array" << endl;
    for (int i = 0; i < N; i++) cin >> MVA[i];

    printMass(MVA, N); 
}
 