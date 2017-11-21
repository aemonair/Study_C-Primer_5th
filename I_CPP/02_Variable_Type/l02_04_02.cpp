#include <iostream>

int main()
{
    std::cout << "2.4.2节练习" << std::endl;
    std::cout << "下面的哪些初始化是合法的？请说明原因。" << std::endl;
    std::cout << "(a) int i = -1, &r = 0;" << std::endl;
    std::cout << "    error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’" << std::endl;
    std::cout << "        int i = -1, &r = 0;" << std::endl;
    std::cout << "                         ^" <<std::endl;
    std::cout << "(b) int *cosnt p2 = &i2;" << std::endl;
    std::cout << "(c) const int i = -1, &r = 0;" << std::endl;
    std::cout << "(d) const int *const p3 = &i2;" << std::endl;
    std::cout << "(e) const int *p1 = &i2;" << std::endl;
    std::cout << "(f) const int &const r2;" << std::endl;
    std::cout << "    error: ‘const’ qualifiers cannot be applied to ‘const int&’" << std::endl;
    std::cout << "        const int &const r2;" << std::endl;
    std::cout << "                         ^" << std::endl;
    std::cout << "    error: ‘r2’ declared as reference but not initialized" << std::endl;
    std::cout << "(g) const int i2 = i, &r = i;" << std::endl;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "说明下面的这些定义是什么意思，挑出其中不合法的。" << std::endl;

    std::cout << "(a) int i, *const cp;" << std::endl;
    std::cout << "error: uninitialized const ‘cp’ [-fpermissive]" << std::endl;
    std::cout << "     int i, *const cp;" << std::endl;
    std::cout << "                   ^" << std::endl;
    std::cout << "(b) int *p1, *const p2;" << std::endl;
    std::cout << "error: uninitialized const ‘p2’ [-fpermissive]" << std::endl;
    std::cout << "     int *p1, *const p2;" << std::endl;
    std::cout << "                     ^" << std::endl;
    std::cout << "(c) const int ic, &r = ic;" << std::endl;
    std::cout << "error: uninitialized const ‘ic’ [-fpermissive]" << std::endl;
    std::cout << "     const int ic, &r = ic;" << std::endl;
    std::cout << "               ^" << std::endl;
    std::cout << "(d) const int *const p3;" << std::endl;
    std::cout << "error: uninitialized const ‘p3’ [-fpermissive]" << std::endl;
    std::cout << "     const int *const p3;" << std::endl;
    std::cout << "                      ^" << std::endl;
    std::cout << "(e) const int *p;" << std::endl;
    std::cout << " not wrong" << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << "练习2.29 假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。" << std::endl;

    //i = ic;
    //p1 = p3;
    //p1 = &ic; 
    //p3 = &ic;
    //p2 = p1;
    //ic = *p3 ;

    std::cout <<"int i = -1;" << std::endl;
    std::cout <<"const int i2 = i;" << std::endl;
    std::cout <<"const int ic = 2;" << std::endl;
    std::cout <<"int *p1;" << std::endl;
    std::cout <<"int *const p2 = &i;" << std::endl;
    std::cout <<"const int *const p3 = &i2;" << std::endl << std::endl;
    std::cout << "(a) i = ic;" << std::endl;
    std::cout << "(b) p1 = p3;" << std::endl;
    std::cout << "//error: invalid conversion from 'const int*' to 'int*' [-fpermissive]" << std::endl;
    std::cout << "// p1 = p3;" << std::endl;
    std::cout << "//      ^~" << std::endl;

    std::cout << "(c) p1 = &ic;" << std::endl;
    std::cout << "//error: invalid conversion from 'const int*' to 'int*' [-fpermissive]" << std::endl;
    std::cout << "// p1 = &ic;" << std::endl;
    std::cout << "//      ^~~" << std::endl;

    std::cout << "(d) p3 = &ic;" << std::endl;
    std::cout << "//error: assignment of read-only variable 'p3'" << std::endl;
    std::cout << "// p3 = &ic;" << std::endl;
    std::cout << "//       ^~" << std::endl;


    std::cout << "(e) p2 = p1;" << std::endl;
    std::cout << "//error: assignment of read-only variable 'p2'" << std::endl;
    std::cout << "// p2 = p1;" << std::endl;
    std::cout << "//      ^~" << std::endl;


    std::cout << "(f) ic = *p3;" << std::endl;
    std::cout << "//error: assignment of read-only variable 'ic'" << std::endl;
    std::cout << "// ic = *p3 ;" << std::endl;
    std::cout << "//       ^~" << std::endl;



    return 0;
}
