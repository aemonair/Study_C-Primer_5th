#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item first;
    Sales_item book;
    if (std::cin >> first)
    {
        while(std::cin >> book)
        {
            first += book;
        }
    }
    std::cout << first << std::endl;
    return 0;
}
