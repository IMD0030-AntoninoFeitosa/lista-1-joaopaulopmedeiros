#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int number;
    int totalNegatives = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> number; 

        if(number < 0) totalNegatives++;
    }

    cout << totalNegatives;

    return 0;
}
