#include <iostream> // header

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1 ;
              << " and " << v2 ;
              << " is " << v1 + v2 << std::endl;
    return 0;
}

// << 缺少前值
/*
 *
 * [Air@localhost 01_Start]$ g++ l01_06.cpp
 * l01_06.cpp: In function ‘int main()’:
 * l01_06.cpp:10:15: error: expected primary-expression before ‘<<’ token
 *                <<  and  << v2 ;
 *                ^
 * l01_06.cpp:11:15: error: expected primary-expression before ‘<<’ token
 *                <<  is  << v1 + v2 << std::endl;
 *                ^
 * /
