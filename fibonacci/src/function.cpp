#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> result{};
    unsigned int item  = 1;
    unsigned int a = 0, b = 1;

    for(int i = 0; i < n; i++)
    {
        result.insert(result.begin() + i, item);
        item = a + b;
        a = b;
        b = item;
    }

    return result;
}