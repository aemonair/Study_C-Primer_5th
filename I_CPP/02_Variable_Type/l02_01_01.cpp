#include <iostream>

int main()
{
    std::cout << "2.1.1节练习" << std::endl;

    std::cout << "练习2.1 "<< std::endl;
    std::cout << "类型 int、long、long long 和 short 的区别是什么？无符号类型和带符号类型的区 别是什么？float 和 double 的区别是什么？ "<< std::endl;
    std::cout << "> C++ guarantees short and int is at least 16 bits, long at least 32 bits, long long at least 64 bits. > The signed can represent positive numbers, negtive numbers and zero, while unsigned can only represent numbers no less than zero."<< std::endl << std::endl;
    std::cout << " int  long  long long  short " << std::endl;
    std::cout << "  4    8       16        4 " << std::endl << std::endl;

    std::cout << " unsigned signed" << std::endl;
    std::cout << "   ≥0       *   " << std::endl;

    std::cout << "-------------------------------- " << std::endl;
    std::cout << "练习2.2"<< std::endl;
	std::cout << "计算按揭贷款时，对于利率、本金和付款分别应该选择何种数据类型？说明你的理由。" << std::endl;
    std::cout << "浮点数" << std::endl;
    std::cout << "-------------------------------- " << std::endl;

	return 0;
}
