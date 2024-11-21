#include <iostream>

using namespace std;

void testFunction(int num) // deep copy
{
    cout << "original num inside the function: " << num << endl;

    num = 10;

    cout << "updated num inside the function: " << num << endl;    
}

int main()
{
    int x = 6;

    cout << "value x before function: " << x << endl;

    testFunction(x);

    cout << "value x after function: " << x << endl;

    return 0;
}