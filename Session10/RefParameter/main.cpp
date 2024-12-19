#include <iostream>

using namespace std;

void testFunction(int& num);

int main()
{
    int x = 6;

    cout << "value x before function: " << x << endl;

    testFunction(x);

    cout << "value x after function: " << x << endl;

    return 0;
}

void testFunction(int& num) // shallow copy
{
    cout << "original num inside the function: " << num << endl;

    num = 10;

    cout << "updated num inside the function: " << num << endl;    
}