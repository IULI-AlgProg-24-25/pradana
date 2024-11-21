#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    cout << "Test power: " << pow(4, 0.5) << endl;
    cout << "Test square root: " << sqrt(9) << endl;
    cout << "Test floor: " << floor(4.999) << endl;
    cout << "Test ceiling: " << ceil(3.0001) << endl;
    cout << "To uppercase: " << static_cast<char>(toupper('a')) << endl;
    cout << "To lowercase: " << static_cast<char>(tolower('A')) << endl;
    return 0;
}