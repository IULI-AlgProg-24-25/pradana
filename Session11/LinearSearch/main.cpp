#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;
int seqSearch(const int list[], int listLength, int searchItem);

int main()
{
    int intList[ARRAY_SIZE];
    int number;

    cout << "Line 9: Enter " << ARRAY_SIZE << " integers." << endl;

    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cin >> intList[index];
    }

    cout << endl; //Line 12
    cout << "Line 13: Enter the number to be searched: "; //Line 13
    cin >> number; //Line 14
    cout << endl; //Line 1

    int pos = seqSearch(intList, ARRAY_SIZE, number); //Line 16
    if (pos!= -1) //Line 17
        cout << "Line 18: " << number << " is found at position " << pos << endl; //Line 18
    else //Line 19
        cout << "Line 20: " << number << " is not in the list." << endl;

    return 0;
}

int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;
    loc = 0;
    
    while (loc < listLength && !found)
    {
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
    }
    
    if (found)
        return loc;
    else
        return -1;
}