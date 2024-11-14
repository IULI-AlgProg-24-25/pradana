#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool isTrue = false;

    string result = (isTrue == true) ? "True" : "False";

    cout << "Result is: " <<  result << endl;

    return 0;
}