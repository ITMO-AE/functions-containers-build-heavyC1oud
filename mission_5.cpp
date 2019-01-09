#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int> &v)
{
    vector<int>::iterator beginIt, endIt;
    int buf;

    if(v.empty()) {
        cout << "invalid data" << endl;
        return;
    }

    // указатели на начало и конец вектора
    beginIt = v.begin();
    endIt = v.end() - 1;

    // последовательная перестановка элементов вектора
    while(beginIt != endIt) {
        buf = *beginIt;
        *beginIt = *endIt;
        *endIt = buf;

        beginIt++;

        if(beginIt == endIt) {
            break;
        }

        endIt--;
    }
}

int main()
{
    // задание вектора
    cout << "Set vector, then enter \"end\"" << endl;

    vector <int> vec;
    string word;
    int data;

    cin >> word;

    while(word != "end") {
        data = atoi(word.c_str());
        vec.push_back(data);
        cin >> word;
    }

    // указатели на начало и конец вектора
    vector<int>::iterator beginIt, endIt;
    beginIt = vec.begin();
    endIt = vec.end();

    // перестановка
    Reverse(vec);

    // вывод вектора
    for(auto i: vec) {
        cout << i << endl;
    }

    return 0;
}
