
//Напишите программу, которая:
// спрашивает у пользователя, сколько имен он хочет ввести;
// просит пользователя ввести каждое имя;
// вызывает функцию для сортировки имен в алфавитном порядке;
// выводит отсортированный список имен

#include <iostream>
#include <algorithm> // для std::sort()
using namespace std;

 
int main()
{
    int N;
    cout << "How many names would you like to enter?: ";
    cin >> N;

    string* arr = new string[N]; // создали динамический массив


    for (int i = 0; i < N; i++) {
        cout << "Enter name #" << i+1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + N);
    cout << "Here is your sorted list: : ";
    for (int i = 0; i < N; i++) {
        cout << "Name #" << i + 1 << ": " << arr[i] << endl;
    }

    delete[] arr; //освободить занимаемую память

}
 