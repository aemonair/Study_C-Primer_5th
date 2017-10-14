#include <iostream>

int i = 42;
int main()
{
    std::cout << "练习2.13 下面程序中j的值是多少？" << std::endl;

    std::cout << "int i = 42; "<< std::endl;
    std::cout << "int main() " << std::endl;
    std::cout << "{ " << std::endl;
    std::cout << "    int i = 100; " << std::endl;
    std::cout << "    int j = i; " << std::endl;
    std::cout << "} " << std::endl;

    int i = 100,sum = 0;
    int j = i;
    std::cout << "j： " << j << std::endl<< std::endl;

    std::cout << "练习2.14 下面的程序合法么？如果合法，将输出什么？ " << std::endl;
    std::cout << "int i = 100, sum = 0; " << std::endl;
std::cout << "for (int i = 0; i != 10; ++i) " << std::endl;
    std::cout << "    sum += i; " << std::endl;
std::cout << "std::cout << i << \" \" << sum << std::endl; " << std::endl;

    for (int i = 0; i != 10; ++i)
        sum += i; 
    std::cout << "合法" <<  i << " " << sum << std::endl; 

    return 0;
}


