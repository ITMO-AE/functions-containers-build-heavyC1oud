#include <vector>

using namespace std;

void Reverse(vector<int> &v)
{
    vector<int>::iterator beginIt, endIt;
    int buf;

    // указатели на начало и конец вектора
    beginIt = v.begin();
    endIt = v.end();

    // последовательная перестановка элементов вектора
    while(beginIt < endIt) {
        buf = *beginIt;
        *beginIt = *endIt;
        *endIt = buf;

        beginIt++;
        endIt--;
    }
}

int main()
{
    return 0;
}
