#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    bool found = true;
    int age = 20;
    double hours = 45.30;
    double overTime = 15.00;
    int count = 200;
    char ch = 'B';

    cout << "found = " << found << endl;
    cout << "!found = " << !found << endl;

    cout << "is overtime? " << (hours > 40) << endl;

    cout << "result? " << (age <= 18 || !found) << endl;

    cout << "count between 0 and 100? " << (count >= 0 && count <= 100) << endl;

    return 0;
}