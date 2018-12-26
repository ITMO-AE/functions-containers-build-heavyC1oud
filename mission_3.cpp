#include <vector>
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

vector <string> PalindromFilter(vector <string> words, int minLength)
{
    vector <string> returnWords;

    // перебор всех элементов вектора с проверкой на полиндром
    // при нахождении полиндрома и выполнении условия его минимального размера
    // элемент копируется в возвращаемый вектор
    for(uint8_t i = 0; i < words.size(); i++) {
        if(IsPalindrom(words[i])) {

            if((words[i].size()) >= (static_cast<unsigned int>(minLength))) {
                returnWords.push_back(words[i]);
            }
        }
    }

    return returnWords;
}

int main()
{
    return 0;
}
