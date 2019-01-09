#include <iostream>
#include <assert.h>

static const int MAX_ARG_VALUE = 10;

using namespace std;

int Factorial(int data)
{
    // проверка на превышение аргументом заданного значения
    assert((data >= 0) && (data <= MAX_ARG_VALUE));

    // вычисление фактрориала
    int returnData = 0;

    returnData = data;

    while(data > 1) {

        data--;

        returnData = returnData * data;
    }

    return returnData;
}

int main()
{
    int data;

    cout << "Set Number: " << endl;
    cin >> data;

    cout << "Factorial is: " << Factorial(data) << endl;

    return 0;
}
