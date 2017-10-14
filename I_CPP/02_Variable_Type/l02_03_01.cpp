#include <iostream>

int main()
{
    std::cout << "练习2.15 下面的定义是不合法的？为什么？" << std::endl;
    std::cout << "(a) int ival = 1.01;" << std::endl;
    std::cout << "(b) int &rvall = 1.01;" << std::endl;
    std::cout << "(c) int &rval2 = ival;" << std::endl;
    std::cout << "(d) int &rval3;" << std::endl;

    int ival = 1.01;
//    int &rvall = 1.01; 
    int &rval2 = ival;
//    int &rval3;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "(b) 类型错误:" << std::endl;
    std::cout << "> error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘double’     " << std::endl;
    std::cout << "    int &rvall = 1.01; "<< std::endl;
    std::cout << "                 ^ " << std::endl;
    std::cout << "(d) 未赋初值:" << std::endl;
    std::cout << "> error: ‘rval3’ declared as reference but not initialized  " << std::endl;
    std::cout << "    int &rval3; " << std::endl;
    std::cout << "         ^" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    std::cout << "练习2.16 考察下面的赋值，回答哪些是不合法的？为什么？哪些是合法的？执行了什么样的操作？" << std::endl;
    std::cout << "int i = 0, &r1 = i;" << std::endl;
    std::cout << "double d = 0, &r2 = d;" << std::endl;
    std::cout << "(a) r2 = 3.14159;" << std::endl;
    std::cout << "(b) r2 = r1;" << std::endl;
    std::cout << "(c) i = r2;" << std::endl;
    std::cout << "(d) r1 = d;" << std::endl;

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159; // 
    r2 = r1;      // double引用 被 int的引用赋值
    i = r2;       // int 被 double 的引用赋值
    r1 = d;       // int的引用 被 double 赋值

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "练习2.17 执行下面的代码段将输出声明结果？" << std::endl;
    std::cout << "int i, &ri = i; " << std::endl;
    std::cout << "i = 5; ri = 10; " << std::endl;
    std::cout << "std::cout << i << \" \" << ri << std::endl; " << std::endl;

    int &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}
