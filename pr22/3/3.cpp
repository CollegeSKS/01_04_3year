
//3. Написать программу, которая запрашивает с клавиатуры
//одномерный массив, в котором размерность задается пользователем,
//и вычисляет сумму отрицательных его элементов.
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
        if(arr[i]< 0) // условие на отрицательность
            sum += arr[i];
    }

    cout << "Sum of negative elements = " << sum;
}
