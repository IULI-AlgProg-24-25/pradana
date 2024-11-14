#include <iostream>

using namespace std;

int main()
{
    double hourlyRate = 0;
    double workHours = 0;
    double totalWage = 0;

    cout << "Your hourly rate: $";
    cin >> hourlyRate;

    cout << "Your working hours this week: ";
    cin >> workHours;

    if (workHours <= 40)
    {
        totalWage = hourlyRate * workHours;
    }
    else
    {
        int overtime = workHours - 40;
        totalWage = (hourlyRate * 40) + (overtime * (1.5 * hourlyRate));
    }

    cout << "Your total wage this week: $" << totalWage << endl;


    return 0;
}