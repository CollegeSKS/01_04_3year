//Составить программный код, содежащий три любые операции с указателями.

#include <iostream>
using namespace std;
int main()
{
    //1 - изменение значения через указатель
    int a = 5;
    int* ptra = &a;
    ptra = 1; 
    cout << a << endl;

    //2 - перемещение по массиву через указатель
    int arr[3] = { 1, 2, 3 };
    int* ptrarr = arr;
    cout << *ptrarr;
    ptrarr += 1;
    cout << *ptrarr;


    //3 - присваивание одного указателя другому
    int b = 2, c=1;
    int* pb = &b, * pc = &c;
    pb = pc;


}

 