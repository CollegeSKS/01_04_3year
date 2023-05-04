//
//Создайте программный код, выполняющий следующие задачи :
//-объявить массив familia[10], где familia – ваша фамилия;
//-задать элементы массива любым способом;
//-объявить указатель int* ptr = familia;
//-вывести на консоль первый элемент массива с помощью переменной familia и с
//помощью имени элемента familia[0];
//-вывести на консоль длину массива;
//-вывести на консоль размер указателя.

#include <iostream>
using namespace std;
int main()
{
    const int N = 10;
    int melent[N] ;
    memset(melent, 5, N); // задать всем элементам значение 5

    int* ptr = melent;
    cout << "First element: " << *melent << melent[0]<<endl;

    cout << "Length of the array: " << sizeof(melent) / N<< endl; //10
    cout << "Size of ptr = " << sizeof(ptr); // 8


}

 