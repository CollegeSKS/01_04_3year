﻿
//Объявите массив name[10], где name – ваше имя.Элементы массива заданы
//программно.Это порядковые числа, которые начинаются с числа
//<номер группы>+<номер компьютера>
//(например, 198 + 17 = 215, числа массива – 215, 216, 217, … 223, 224).
//Передайте массив в функцию changeMass(), которая увеличивает все элементы
//массива на 1 и выводит на консоль

#include <iostream>
using namespace std;

void changeMass(int* arr, int N) {
    for (int i = 0; i < N; i++) {
        arr[i] += 1;
        cout << arr[i] << " - ";
    }
}

int main()
{
    const int N = 10;
    int veya[N];
    for (int i = 0; i < N; i++) veya[i] = 204+12+i;

    changeMass(veya, N);

}
