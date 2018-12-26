#include <vector>

using namespace std;

void someVectorAct(vector <int> &vec1, vector <int> &vec2)
{
    // копирование содержимого первого вектора в конец второго вектора
    for(unsigned int i = 0; i < vec1.size(); i++) {
       vec2.push_back(vec1[i]);
    }

    // очистка первого вектора
    vec1.clear();
}

int main()
{
    return 0;
}
