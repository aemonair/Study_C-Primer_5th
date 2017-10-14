#include <iostream>
#include <string.h>
#include "Sales_item.h"

static int N = 5;

int main()
{
#if 0
    int count = 1;
    Sales_item first;
    Sales_item current;
    
    std::cin >> first;

    while(std::cin >> current)
    {
        if (current.isbn() == first.isbn())
        {
            ++ count ;
        }
        else
        {
            std::cout << first << " show " << count << " times" << std::endl;
            count = 0;
            first = current;
        }
    }
    std::cout << first << " show " << count << " times" << std::endl;
#else
    int i = 0;
    int n = 0;
    int array2[N];
    Sales_item items[N];
    Sales_item item;
    
    bzero(array2, sizeof(array2));

    std::cin >> item;
    items[0] = item;

    while(std::cin >> item)
    {
        if (item.isbn() == items[n].isbn())
        {
            ++ array2[n] ;
            items[n] += item;
        }
        else
        {
            ++ n;
            items[n] = item;
        }
    }
    for (i = 0; i <= n; ++i)
    {
        std::cout << items[i] << " has " << array2[i] + 1 << std::endl;
    }
#endif
    return 0;
}
