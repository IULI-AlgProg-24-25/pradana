#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int counter = 0;

    for (counter = 0; counter < 5; counter++)
    {
        cout << "Number #" << counter + 1 << ": ";
        cin >> num[counter];
    }

    cout << endl;
    cout << "The reversed order of the number is: ";

    for (counter = 4; counter >= 0; counter--)
    {
        cout << num[counter] << " ";
    }

    cout << endl;

    return 0;
}