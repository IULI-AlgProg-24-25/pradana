#include <iostream>

using namespace std;

int main()
{
    double score = 0;
    char grade = 'F';

    cout << "Your score: ";
    cin >> score;

    if (score >= 86)
    {
        grade = 'A';
    }
    else if (score >= 71)
    {
        grade = 'B';
    }
    else if (score >= 56)
    {
        grade = 'C';
    }
    else if (score >= 46)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;


    return 0;
}