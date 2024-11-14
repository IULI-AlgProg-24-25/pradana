#include <iostream>

using namespace std;

int main()
{
    double num = 100;
    double result = num;
    
    if (num < 0)
    {
        result = -num;
    }

    cout << "Absolute number of " << num << " is " << result << endl ;
    return 0;
}