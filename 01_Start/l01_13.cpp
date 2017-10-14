#include <iostream>

int main()
{
    int sum = 0;

    for (int val = 50; val <= 100; ++ val)
    {
        sum += val;
    }
    std::cout << sum << std::endl;


    for (int val = 10; val >= 0; --val)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    int left = 0;
    int right = 0;
    std::cout << "Input two Znumber:" << std::endl;
    std::cin >> left >> right;

    for (int i = left; i != right; left<right?++i:--i)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return 0;
}
