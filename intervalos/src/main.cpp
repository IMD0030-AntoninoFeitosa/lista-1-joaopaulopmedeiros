/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{  
    int x;
    int count = 0;
    int in1 = 0;
    int in2 = 0;
    int in3 = 0;
    int in4 = 0;
    int in5 = 0;
    while( cin >> std::ws >> x) {
        count++;
        if(x >= 0 && x < 25){
        in1++;
        } else if(x >= 25 && x < 50){
        in2++;
        } else if(x >= 50 && x < 75){
        in3++;
        } else if(x >= 75 && x < 100){
        in4++;
        } else {
        in5++;
        }
    }
  
    cout << setprecision(4) << (in1 * 100.0)/static_cast<double>(count) << endl;
    cout << setprecision(4) << (in2 * 100.0)/count << endl;
    cout << setprecision(4) << (in3 * 100.0)/count << endl;
    cout << setprecision(4) << (in4 * 100.0)/count << endl;
    cout << setprecision(4) << (in5 * 100.0)/count << endl;

    return 0;
}
