#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string data)
{

    // проверка на пустую строку
    if(data.empty()) {
        cout << "empty string" << endl;

        return false;
    }

    // указатели на начало и конец строки
    string::iterator beginIt, endIt;

    beginIt = data.begin();
    endIt = data.end() - 1;

    // последовательное сравнение всех символов
    // в случае несовпадения значений - строка не считается палиндромом
    while(beginIt < endIt) {
        if ((*beginIt) != (*endIt)) {
            return false;
        }

        beginIt++;
        endIt--;
    }

    return true;
}

int main()
{
    string data;

    cout << "enter the word: " << endl;

    cin >> data;

    if(IsPalindrom(data)) {
        cout << "word is palindrom" << endl;
    }
    else {
        cout << "word is not a palindrom" << endl;
    }


    return 0;
}
