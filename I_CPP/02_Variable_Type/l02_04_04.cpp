#include <iostream>

int main()
{
    std::cout << "2.4.4节练习" << std::endl;
    std::cout << "练习2.23 下面的代码是否合法？如果合法，请设法将其修改正确。" << std::endl;
    std::cout << "int null = 0, *p = null;" << std::endl;
    
    std::cout << "error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]" << std::endl;
    std::cout << "     int null = 0, *p = null;" << std::endl;
    std::cout << "                        ^" << std::endl;
    std::cout << "初始化指针不能为整型值" << std::endl;
 
    return 0;
}
