#include <iostream>
#include <string.h>
#include "Sales_item.h"

static int N = 10;

int main()
{
    int i = 0;
    unsigned int n = 0;
    int array2[N];
    //memset(array2, 0, sizeof(array2));
    //std::cout << sizeof(array2) << " " <<sizeof(array2)/sizeof(array2[0]) << std::endl;
    bzero(array2, sizeof(array2));
    Sales_item array[N];
    Sales_item item;

    while(std::cin >> item)
    {
        i = 0;
        while(i < n)
        {
            if (item.isbn() == array[i].isbn())
            {
                array[i] += item;
                ++ array2[i] ;
                break ;
            }
            ++ i;
        }
        if (i == n)
        {
            array[i] = item;
            array2[i] = 0;
            ++ n;
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << " has " << array2[i] + 1 << " times." << std::endl;
    }
    return 0;
}
