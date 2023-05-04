
#include <iostream> 
#include <map>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    cout << "Сейчас Вам будет предложен тест." << endl <<
        "К каждому вопросу дается несколько вариантов ответов." <<
        endl << " Вы должны ввести номер правильного ответа" <<
        endl << "и нажать клавишу < Enter>" << endl;

    // map для привязки вопросов к ответам
    map<string, string> quest;
    quest.emplace("Whats my name?", "Veya");
    quest.emplace("Whats my age?", "18");
    quest.emplace("Where do we live?", "Russia");
    quest.emplace("Which year is it?", "2023");
    quest.emplace("Are you ok?", "No");

    //5 questions
    int size = 5;
    int sum = 0; // for results
    string s;

    auto it = quest.find("Whats my name?");
    cout << (string)it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("Whats my age?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("Where do we live?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("Which year is it?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("Are you ok?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;


    //выставляем оценку
    int res = sum / size * 100;
    switch (res) {
    case 100: {
        cout << "ОТЛИЧНО "; break;
    }
    case 80: {
        cout << "ХОРОШО  "; break;
    }
    case 60: {
        cout << "УДОВЛЕТВОРИТЕЛЬНО  "; break;
    }
    default: {
        cout << "ПЛОХО  "; break;
    }
    }
}

