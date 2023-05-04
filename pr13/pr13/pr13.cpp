//Задание №1
//У вас есть веб - сайт и вы хотите отслеживать, сколько денег вы зарабатываете в день
//от размещенной на нем рекламы.Объявите структуру Advertising, которая будет
//отслеживать :
//-сколько объявлений вы показали посетителям(1);
//-сколько процентов посетителей нажали на объявления(2);
//-сколько вы заработали в среднем за каждое нажатие на объявления(3).
//Значения этих трех полей должен вводить пользователь.
//Передайте структуру Advertising в функцию, которая выведет каждое из этих
//значений, а затем подсчитает, сколько всего денег вы заработали за день(перемножьте все 3
//	поля).


#include <iostream>

using namespace std;

void Zarabotali(Advertising adv);

struct Advertising
{
	int pokazali;
	float nazali, zarab;
};

int main() {

	Advertising adv;
	cout << "Input the amount of ads shown to site visitors: ";
	cin >> adv.pokazali;
	cout << "Input the amount of site visitors: ";
	cin >> adv.nazali;
	cout << "Input the amount of money earned: ";
	cin >> adv.zarab;

	Zarabotali(adv);

	return 0;
}

void Zarabotali(Advertising adv) {
	cout << "You have earned - " << adv.pokazali * adv.nazali * adv.zarab << " - dollars in a day";
}