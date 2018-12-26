#include <iostream>
#define MAX_ARG_VALUE 10

using namespace std;

int Factorial(int data)
{
    int returnData = 0;

	// проверка на превышение аргументом заданного значения
    if((abs(data)) > MAX_ARG_VALUE) {
        cout <<  "argument is too big" << endl;
        returnData = -1;
        return returnData;
    }

	// проверка на отрицательный аргумент
    if(data < 0) {
        returnData = 1;
        return returnData;
    }

	// вычисление фактрориала
    returnData = data;

    while(data > 1) {

        data--;

        returnData = returnData * data;
    }

    return returnData;
}

int main()
{
    return 0;
}
