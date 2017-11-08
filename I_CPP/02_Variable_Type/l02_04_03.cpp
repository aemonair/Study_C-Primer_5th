#include <iostream>

int main()
{
    std::cout << "练习2.30" << std::endl;
    std::cout << "对于下面的这些语句，请说明对象被声明成了顶层const还是底层const？" << std::endl;
    std::cout << "const int v2 = 0;" << std::endl;
    std::cout << "int v1 = v2;" << std::endl;
    std::cout << "int *p1 = &v1, &r1 = v1;" << std::endl;
    std::cout << "const int *p2 = &v2, *const p3 = &i, &r2 = v2;" << std::endl;

    //int i = 0;
    //const int v2 = 0;
    //int v1 = v2;
    //int *p1 = &v1, &r1 = v1;
    //const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    std::cout << "练习2.31" << std::endl;
    std::cout << "假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。" << std::endl;
    std::cout << "r1 = v2;" << std::endl;
    std::cout << "p1 = p2; p2 = p1;" << std::endl;
    std::cout << "p1 = p3; p2 = p3;" << std::endl;

    //r1 = v2;
    //p1 = p2; p2 = p1;
    //p1 = p3; p2 = p3;
    return 0;
}
