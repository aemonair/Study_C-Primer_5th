#include <iostream>

int main()
{
    int left = 0;
    int right = 0;
    std::cin >> left >> right;

#if 1
    while(left != right)
    {
        left <= right ?
        std::cout << left++ << ' ':
        std::cout << left-- << ' ';
    }
    std::cout << right;
#else
    int i = 0; 
    if (left < right)
    {
        i = left;
    }
    else
    {
        i = right;
        right = left;
    }
    while(i < right)
    {
        std::cout << i << ' ';
        ++ i;
    }
#endif
    std::cout << std::endl;
    return 0;
}
