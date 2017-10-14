#include <iostream>

std::string global_str;
int global_int;

int main()
{
    std::cout << "练习2.9 解释下列定义的含义。"        << std::endl;
    std::cout << "(a) std::cin >> int input_value;"    << std::endl;
    //std::cin >> int input_value;
    std::cout << "error: expected primary-expression before ‘int’" << std::endl;
    std::cout << "std::cin >> int input_value;" << std::endl;
    std::cout << "            ^~~ " << std::endl;

    std::cout << "(b) int i = { 3.14 };"               << std::endl;
    //int i = { 3.14 };
    std::cout << " error: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { } [-Wnarrowing]" << std::endl;
    std::cout << "int i = { 3.14 };" << std::endl;
    std::cout << "               ^" << std::endl;

    std::cout << "(c) double salary = wage = 9999.99;" << std::endl;
    //double salary = wage = 9999.99;
    std::cout << "error: ‘wage’ was not declared in this scope" << std::endl;
    std::cout << "double salary = wage = 9999.99;" << std::endl;
    std::cout << "                ^~~~" << std::endl;

    std::cout << "(d) int i = 3.14;"                   << std::endl;
    std::cout << "double to int convert "              << std::endl;
    int i = 3.14;
    std::cout << "----------------------------------"  << std::endl;


    std::cout << "练习2.10 下列变量的初始值是多少："   << std::endl;
    std::cout << "std::string global_str;"             << std::endl;
    std::cout << "int global_int;"                     << std::endl;
    std::cout << "int main()"                          << std::endl;
    std::cout << "{"                                   << std::endl;
    std::cout << "    int local_int;"                  << std::endl;
    std::cout << "    std::string local_str;"          << std::endl;
    std::cout << "}"                                   << std::endl;

    int local_int;
    std::string local_str;
    std::cout << "global_str:" << global_str << std::endl;
    std::cout << "global_int:" << global_int << std::endl;
    std::cout << "local_int :"  << local_int << std::endl;
    std::cout << "local_str :"  << local_str << std::endl;
    std::cout << "----------------------------------"  << std::endl;

    return 0;
}
