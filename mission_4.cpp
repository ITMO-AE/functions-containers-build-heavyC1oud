#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void someVectorAct(vector <int> &vec1, vector <int> &vec2)
{
    // копирование содержимого первого вектора в конец второго вектора
    for(auto i: vec1) {
       vec2.push_back(i);
    }

    // очистка первого вектора
    vec1.clear();
}

int main()
{
    // задание первого вектора
    cout << "Set first vector, then enter \"end\"" << endl;

    vector <int> vec1;
    string word;
    int data;

    cin >> word;

    while(word != "end") {
        data = atoi(word.c_str());
        vec1.push_back(data);
        cin >> word;
    }

    // задание второго вектора
    cout << "Set second vector, then enter \"end\"" << endl;

    vector <int> vec2;

    cin >> word;

    while(word != "end") {
        data = atoi(word.c_str());
        vec2.push_back(data);
        cin >> word;
    }

    // копирование содержимого первого вектора в конец второго вектора
    someVectorAct(vec1, vec2);

    // вывод второго вектора
    for(auto i: vec2) {
        cout << i << endl;
    }


    return 0;
}
