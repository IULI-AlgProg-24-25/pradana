#include <iostream>

using namespace std;

int getAbsoluteValue(int number)
{
    int result = number;

    if (number < 0)
    {
        result = -number;
    }

    return result;
}

int main()
{
    int num1 = 100;
    int num2 = -50;

    cout << "Absolute number of " << num1 << " is " << getAbsoluteValue(num1) << endl ;
    cout << "Absolute number of " << num2 << " is " << getAbsoluteValue(num2) << endl ;

    return 0;
}