#include <iostream>
#include <math.h>

int main()
{
    std::cout << "练习2.3 读程序写结果："                                  << std::endl;
    std::cout << "unsigned u = 10, u2 = 42; "                              << std::endl;
    std::cout << "std::cout << u2 - u  << std::endl;   // 32 "             << std::endl;
    std::cout << "std::cout << u  - u2 << std::endl;   // 2^32 + 10 - 42 " << std::endl;

    std::cout << "int i = 10, i2 = 42; "                                   << std::endl;
    std::cout << "std::cout << i2 - i  << std::endl;   // 32 "             << std::endl;
    std::cout << "std::cout << i  - i2 << std::endl;   // -32 "            << std::endl;
    std::cout << "std::cout << i  - u  << std::endl;   // 0 "              << std::endl;
    std::cout << "std::cout << u  - i  << std::endl;   // 0 "              << std::endl;

    std::cout << "----------------------" << std::endl;

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u  << std::endl;                 // 32
    std::cout << u  - u2 << std::endl;                 // 2^32 + 10 - 42  //  4294967264 

    int i = 10, i2 = 42;
    std::cout << i2 - i  << std::endl;                 // 32
    std::cout << i  - i2 << std::endl;                 // -32
    std::cout << i  - u  << std::endl;                 // 0
    std::cout << u  - i  << std::endl;                 // 2^32 wrong: (0)
 
    std::cout << "----------------------" << std::endl;
    //std::cout << int(pow(2, 32)) - 42 + 10 << std::endl;
    //std::cout << 4294967296 - 42 + 10 << std::endl;
    return 0;
}

// 
//  32 
//  4294967264 
//  32 
//  -32 
//  0 
//  0
//  4294967264 
//  2^32 == 4294967296

