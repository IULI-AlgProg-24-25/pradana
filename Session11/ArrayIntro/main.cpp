#include <iostream>

using namespace std;

int main()
{
    double sales[10];
    int index;
    int maxIndex = 0;
    double largestSale = 0;
    double sum = 0;
    double average = 0;

    for (index = 0; index < 10; index++)
    {
        sales[index] = 0;
    }

    for (index = 0; index < 10; index++)
    {
        cout << "Sales #" << index + 1 << ": ";
        cin >> sales[index];

        sum = sum + sales[index];        
    }

    for (index = 1; index < 10; index++)
    {
        if (sales[maxIndex] < sales[index])
        {
            maxIndex = index;
        }
    }

    average = sum / 10;
    largestSale = sales[maxIndex];

    cout << "The sum of the sales is: $" << sum << " million." << endl;
    cout << "The average of the sales is: $" << average << " million." << endl;
    cout << "The largest sales is: $" << largestSale << " million." << endl;


    return 0;
}