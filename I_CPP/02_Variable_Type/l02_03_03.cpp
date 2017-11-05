#include <iostream>

int main()
{
    std::cout << "说明下列变量的类型和值。" << std::endl;
    std::cout << "(a) int *ip, i, &r = i;" << std::endl;
    int *ip1, i1, &r1 = i1;
    std::cout << "  ip  : "<< ip1 << "   i: " << i1 << "   r: " << r1 << std::endl;

    std::cout << "  ip  : int型指针  / unsure" << std::endl;
    std::cout << "  i   ：int        / 0" << std::endl;
    std::cout << "  r   ：引用       / 0" << std::endl << std::endl; 


    std::cout << "(b) int i, *ip = 0;" << std::endl;
    int i2, *ip2 = 0;
    std::cout << "  i   : " << i2 << "          ip:" << ip2 << std::endl; 
    std::cout << "  i   : int        / 0" << std::endl;
    std::cout << "  ip  :pointer指针 / nullptr" << std::endl<< std::endl;


    std::cout << "(c) int *ip, ip2;" << std::endl;
    int *ip3, ip23;
    std::cout << "  ip  : " << ip3 << "    ip2:" << ip23 << std::endl;
    std::cout << "  ip  : int型指针  / unsure" << std::endl;
    std::cout << "  ip2 : int型      / 0" << std::endl << std::endl;

    return 0;
}
