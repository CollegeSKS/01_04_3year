
//Создайте программный код по следующим требованиям.
//Объявите указатель на массив типа double и предложите пользователю выбрать его
//размер.Далее напишите четыре функции : первая должна выделить память для массива,
//вторая – заполнить ячейки данными, третья – показать данные на экран, четвертая –
//освободить занимаемую память.Программа должна предлагать пользователю продолжать
//работу(создавать новые динамические массивы) или выйти из программы

#include <iostream>
using namespace std;
 
double* first(double N) { // распределить память
    double*arr = new double[N];
    return arr;
}
void second(double* arr, int N) { //задать значения элементам массива
    memset(arr, 5, N);
}
void third(double* arr, int N) { // вывести элементы массива
    for (int i = 0; i < N; i++) cout << arr[i]<< " - ";
}
void fourth(double* arr) { //освободить память
    delete[] arr;
}

int main()
{
    int N;
    cout << "Input array size: ";
    cin >> N;
     
    double* arr = first(N);
    second(arr, N);
    third(arr, N);
    fourth(arr);
}
