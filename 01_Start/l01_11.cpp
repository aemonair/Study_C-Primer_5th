#include <iostream>

int main()
{
    int left = 0;
    int right = 0;
    std::cin >> left >> right;

#if 0 
    int i = left < right ? left: right;
    right = left < right ? right : left;
    while( i <= right)
    {
        std::cout << i << ' ';
        ++ i;
    }
#elif    
    int i = left;
    while(i != right)
    {
        std::cout << i << ' ';
        left < right? ++i : --i;
    }
#endif
    std::cout << std::endl;
    return 0;
}
