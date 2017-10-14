#include <iostream>

int main()
{
    std::cout << "练习2.5:指出下述字面值的数据类型并说明每一组内几种字面值的区别：" << std::endl;
    std::cout << "(a)'a', L'a', \"a\", L\"a\"" << std::endl;
    std::cout << "> char, long char, string, long string" << std::endl;
    std::cout << "(b)10, 10u, 10L, 10uL, 012, 0xC" << std::endl;
    std::cout << "> int, unsigned , long, unsigned long, int , int" << std::endl;
    std::cout << "(c)3.14, 3.14f, 3.14L" << std::endl;
    std::cout << "> double, float, long double" << std::endl;
    std::cout << "(d)10, 10u, 10., 10e-2" << std::endl;
    std::cout << "> int , unsigned, double, double" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "练习2.6:下面两组定义是否有区别，如果有，请叙述之：" << std::endl;
    std::cout << "int month = 9, day = 7;" << std::endl;
    std::cout << "int month = 09, day = 07;" << std::endl;

    std::cout << "> 进制" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "练习2.7:下述字面值表示何种含义?它们各自的数据类型是什么?" << std::endl;
    std::cout << "(a)\"Who goes with F\\145rgus?\\012\" > 字符串" << std::endl;
    std::cout << "(b)3.14elL                        > long long double" << std::endl;
    std::cout << "(c)1024f                          > float" << std::endl;
    std::cout << "(d)3.14L                          > long double" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "练习2.8:请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其先输出2，然后输出制表符，再输出M，最后转到新一行。" << std::endl;

    std::cout << "std::cout << \"2\\115\\n\" << std::endl;" << std::endl;
    std::cout << "std::cout << \"2\\t\\115\\n\" << std::endl;" << std::endl;
    std::cout << "2\115\n" << std::endl;
    std::cout << "2\t\115\n" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    return 0;
}


