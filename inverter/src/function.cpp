#include <iostream>
#include <array>
#include <string>
/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int n = arr.size();

    int aux[n];

    if(n > 1) {
        for (int i = 0; i < n; i++) {
            aux[n - 1 - i] = std::stoi(arr[i]);
        }
 
        for (int i = 0; i < n; i++) {
            arr[i] = std::to_string(aux[i]);
        }
    }
}
