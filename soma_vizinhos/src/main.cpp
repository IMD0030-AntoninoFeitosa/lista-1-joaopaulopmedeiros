/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m = 0;
    int n = 0;
    int amount = 0;

    cin >> m;
    cin >> n;

    if(n > 0) {
        for(int i = m; i < (m + n); i++)
        {
            amount += i;
        }
    } else {
        for(int i = m; i > (m + n); i--)
        {
            amount += i;
        }
    }

    cout << amount;

    return 0;
}
