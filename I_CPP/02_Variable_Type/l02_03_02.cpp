#include <iostream>

int main()
{
    std::cout << "练习2.18 编写代码分别更改指针的值以及指针所指对象的值。" << std::endl;
    int value1 = 12;
    int value2 = 34;
    int *pvalue = &value1;
    std::cout << "int value1 = 12;" << std::endl;
    std::cout << "int value2 = 34;" << std::endl;
    std::cout << "int *pvalue = &value1;" << std::endl;

    std::cout << "// The address of " << pvalue << " is pointed value " << *pvalue << std::endl;
    std::cout << "// Change the point value: " << std::endl;
    pvalue = &value2;
    std::cout << "pvalue = &value2;" << std::endl;
    std::cout << "// The address of " << pvalue << " is pointed value " << *pvalue << std::endl;
    std::cout << "// Change the pointed value: " << std::endl;
    *pvalue = 56;
    std::cout << "*pvalue = 56;" << std::endl;
    std::cout << "// The address of " << pvalue << " is pointed value " << *pvalue << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.19 说明指针和引用的主要区别。" << std::endl;
    std::cout << "  * / & " << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.20 请叙述下面这段代码的作用。" << std::endl;
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << "int i = 42;" << std::endl;
    std::cout << "int *p1 = &i;" << std::endl;
    std::cout << "*p1 = *p1 * *p1;" << std::endl;

    std::cout << "We can mul the *point(*p) just like number(i)" << std::endl;
    std::cout << "And i =  "<< i << " the *p1 = " << *p1 << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.21 请解释下述定义，在这些定义中有非法的吗？如果有，为什么？" << std::endl;
    std::cout << "int i = 0;" << std::endl;
    std::cout << "(a) double *dp = &i;" << std::endl;

    std::cout << "> (a) error: cannot convert ‘int*’ to ‘double*’ in initialization" << std::endl;
    std::cout << "    double *dp = &i;" << std::endl;
    std::cout << "                  ^" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "(b) int *ip = i;" << std::endl;
    std::cout << "> (b) error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]" << std::endl;
    std::cout << "    int *ip = i;" << std::endl;
    std::cout << "              ^" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "(c) int *p = &i;" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.22 假设p是一个int型指针，请说明下述代码的含义。" << std::endl;
    std::cout << "if (p)   // ... " << std::endl;
    std::cout << "if (*p)  // ... " << std::endl;
    std::cout << "the if (p) will check the point <> nullptr . " << std::endl;
    std::cout << "the if (*p) will check the value of *p <> 0 . " << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.23 给定指针p，你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路：如果不能，也请说明原因。" << std::endl;
    std::cout << "Can not, do not know whether the pointer pointing address can be read, can not directly use the reference. " << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "练习2.24 在下面这段代码中为什么p合法而lp非法？" << std::endl;
    //int i = 42;
    void *p = &i;
    long *lp = &i;
    std::cout << "int i = 42;" << std::endl;
    std::cout << "void *p = &i;" << std::endl;
    std::cout << "long *lp = &i;" << std::endl;

    std::cout << "Void * can be converted to any type of pointer, but it cannot force long to be int " << std::endl;
    std::cout << "error: cannot convert ‘int*’ to ‘long int*’ in initialization"<< std::endl;
    std::cout << "     long *lp = &i;" << std::endl;
    std::cout << "                 ^" << std::endl;


    return 0;
}
