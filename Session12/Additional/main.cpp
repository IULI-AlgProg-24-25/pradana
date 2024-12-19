#include <iostream>

using namespace std;

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int getAbsoluteValue(int val);

int main()
{
    int a = 10;
    int b = 2;

    int addResult = add(a, b);
    int absResult = getAbsoluteValue(50); 
    

    cout << "Add result: " << addResult << endl;
    cout << "Absolute value: " << absResult << endl;


    return 0;
}

int getAbsoluteValue(int val)
{
    if (val >= 0)
    {
        return val;
    }
    else
    {
        return -val;
    }
}

int add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int subtract(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}
int multiply(int num1, int num2);
int divide(int num1, int num2);