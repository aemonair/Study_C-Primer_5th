#include <iostream>

int main()
{
    //  const int buf;
    //  int cnt = 0;
    //  const int ze = cnt;
    //  ++cnt; ++sz;

    std::cout << "练习2.26：下面哪些句子是合法的？如果有不合法的句子，请说明为什么？" << std::endl;
    std::cout << "(a) const int buf;" << std::endl;
    std::cout << "(b) int cnt = 0;" << std::endl;
    std::cout << "(c) const int ze = cnt;" << std::endl;
    std::cout << "(d) ++cnt; ++sz;" << std::endl;

    std::cout << "-----------------------" << std::endl;

    std::cout << "(a) error: uninitialized const ‘buf’ [-fpermissive]" << std::endl;
    std::cout << "     const int buf;" << std::endl;
    std::cout << "               ^" << std::endl;
    std::cout << "    未初始化const类型的buf" << std::endl << std::endl;

    std::cout << "(d) error: ‘sz’ was not declared in this scope" << std::endl;
    std::cout << "     ++cnt; ++sz;" << std::endl;
    std::cout << "              ^" << std::endl ;
    std::cout << "    sz 被定义为const，不能进行改变" << std::endl << std::endl;

    return 0;
}
