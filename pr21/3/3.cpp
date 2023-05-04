

//3. Написать программу, которая выводит 
// среднее значение заданного массива из 10 целых чисел.
#include <iostream>
using namespace std;
 
int main()
{
    const int N = 10;
    int array[N] = { 1, 2,3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr_ar = array;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += *ptr_ar;
        *ptr_ar++;
    }
    cout << "Average = " << sum / N;
}
