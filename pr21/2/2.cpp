
//Задайте массив целочисленный FIO[10], где FIO – ваши инициалы.Элементы
//массива задайте вводом с клавиатуры.Передайте элементы массива в функцию
//printMass(), которая выводит на консоль все элементы массива.

#include <iostream>
using namespace std;

 
int main()
{
    const int N = 5;
    int array[N] = { 1, 2,3, 4, 5 };
    int* ptr_ar = array;
    
    for (int i = 0; i < N; i++) {
        cout << *ptr_ar;
        ptr_ar++;
    }
}
 