#include <iostream>
#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{

    int minPos = 0;
    int minValue = 0;

    int maxPos = 0;
    int maxValue = 0;

    int length = n / sizeof V[0];

    for(int i = 0; i < length; i++)
    {
        if(minValue >= V[i]) {
            minValue = V[i];
            minPos = i;
        }

        if(maxValue >= V[i]) {
            maxValue = V[i];
            maxPos = i;
        }
    }

    return { minPos, maxPos };
}
