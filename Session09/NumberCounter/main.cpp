#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int i = 0;
    int limit;
    
    do
    {
        cout << "Please input positive number: ";
        cin >> limit;
    } while (limit >= 0);

    cout << "You input a negative number!";

    return 0;
}