#include <iostream>

// while与for循环，
static int N = 5;

int main()
{
    int i = 0;
    while(i < N)
    {
        std::cout << i;
        ++ i;
    }
    // while循环 循环体中 判断条件少、醒目 

    for (int i = 0; i < N; ++i)
    {
        std::cout << i;
    }
    // for循环 循环变量多 循环体内简单

    return 0;
}
