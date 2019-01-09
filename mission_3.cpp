#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

using namespace std;

static const int minLength = 3;

bool IsPalindrom(string data)
{

    // проверка на пустую строку
    if(data[0] == 0) {
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

vector <string> PalindromFilter(vector <string> words, int minLength)
{
    assert(minLength >= 0);

    vector <string> returnWords;

    // перебор всех элементов вектора с проверкой выполнения условия его минимального размера
    // и проверкой на палиндром, если условия удовлетворяются
    // элемент копируется в возвращаемый вектор
    for(auto i: words) {
        if((i.size()) >= (static_cast<unsigned int>(minLength))) {
            if(IsPalindrom(i)) {
                returnWords.push_back(i);
            }
        }
    }

    return returnWords;
}

int main()
{
    vector <string> words;
    vector <string> palindromWords;
    string word;

    // ввод списка слов
    cout << "enter some words, then enter \"end\" " << endl;

    cin >> word;

    while(word != "end") {
        words.push_back(word);
        cin >> word;
    }

    // фильтр палиндромов определенной величины
    palindromWords = PalindromFilter(words, minLength);

    // вывод отфильтрованных палиндромов
    for(auto i: palindromWords) {
        cout << i << endl;
    }

    return 0;
}
