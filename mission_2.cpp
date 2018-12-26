#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string data)
{
    string::iterator beginIt, endIt;

	// указатели на начало и конец строки
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
    return 0;
}
