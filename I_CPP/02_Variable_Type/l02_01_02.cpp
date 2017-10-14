#include <iostream>
#include <math.h>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u  << std::endl;   // 32
    std::cout << u  - u2 << std::endl;   // 2^32 + 10 - 42

    int i = 10, i2 = 42;
    std::cout << i2 - i  << std::endl;   // 32
    std::cout << i  - i2 << std::endl;   // -32
    std::cout << i  - u  << std::endl;   // 0
    std::cout << u  - i  << std::endl;   // 2^32
 
    std::cout << std::endl;
    //std::cout << int(pow(2, 32)) - 42 + 10 << std::endl;
    std::cout << 4294967296 - 42 + 10 << std::endl;
    return 0;
}

// 
//  32 
//  4294967264 
//  32 
//  -32 
//  0 
//  0
//  4294967296

