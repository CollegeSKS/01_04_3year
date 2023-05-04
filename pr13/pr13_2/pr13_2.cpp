
//Создайте структуру для хранения дробных чисел.Структура должна иметь 2 поля:
//целочисленный числитель и целочисленный знаменатель.Объявите две дробные переменные
//(два экземпляра структуры) и получите их значения от пользователя.Напишите функцию
//multiply() (параметрами которой будут эти две переменные), которая будет перемножать эти
//числа и выводить результат в виде десятичного числа.
//Например :
//    struct Drob
//{
//    int chislitel;
//    int znamenatel;
//};
//Объявить два экземпляра структуры : Drob d1 и Drob d2.
//Запросить у пользователя значения :
//d1.chislitel, d1.znamenatel, d2.chislitel и d2.znamenatel.
//В фнкции multiply() выполнить вычисления(не забываем, что нужно получить
//    результат в виде десятичного числа) :
//    (d1.chislitel* d2.chislitel) / (d1.znamenatel * d2.znamenatel

#include <iostream>

using namespace std;

float muliply(Drob d1, Drob d2);

struct Drob {
    int chisl, znam;
};

int main()
{
    Drob d1, d2;
    cout << "Input first numerator and denominator";
    cin >> d1.chisl >> d1.znam;
    cout << "Input second numerator and denominator";
    cin >> d2.chisl >> d2.znam;

    cout << "Result of multiplication = " << muliply(d1, d2);

    return 0;
}

float muliply(Drob d1, Drob d2) {
    return (d1.chisl * d2.chisl) / (d1.znam * d2.znam);
}