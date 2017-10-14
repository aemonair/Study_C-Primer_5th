#include <iostream>

int  main()
{
    std::cout << "练习2.12 指出名字非法的：" << std::endl;

    std::cout << "(a) int double = 3.14;" << std::endl;
    std::cout << "(b) int _;" << std::endl;
    std::cout << "(c) int catch-22;" << std::endl;
    std::cout << "(d) int 1_or_2 = 1;" << std::endl;
    std::cout << "(e) double Double = 3.14;" << std::endl;

    //int double = 3.14;
    //int _;
    //int catch-22;
    //int 1_or_2 = 1;
    //double Double = 3.14;

    std::cout << "-------------------------------" << std::endl;
    std::cout << "(a) error: expected unqualified-id before ‘=’ token" << std::endl;
    std::cout << "int double = 3.14;" << std::endl;
    std::cout << "             ^" << std::endl;

    std::cout << "(c) error: expected unqualified-id before ‘catch’" << std::endl;
    std::cout << "int catch-22;" << std::endl;
    std::cout << "    ^~~~~" << std::endl;

    std::cout << "(d) error: expected unqualified-id before numeric constant " << std::endl;
    std::cout << "int 1_or_2 = 1;" << std::endl;
    std::cout << "    ^~~~~~ " << std::endl;

    return 0;
}
