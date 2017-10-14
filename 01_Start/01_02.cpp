#include <iostream> // header

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 
              << " is " << v1 + v2 << std::endl;
    return 0;
}

/* 
 * 1. 向流写数据
 * 输出运算符 << 左侧必须是一个ostream对象，
 * 右侧对象是要打印的值。
 * 输出运算符 << 的计算结果就是其左侧运算对象。
 * （计算结果就是我们写入给定值的那个ostream对象）
 */

/*
 * 2.标准库名字
 * std:: 指出名cout和endl是定义在名为std的命名空间namespace中的。
 */

/*
 * 3.从流中读数据
 * 输入运算符 >> 接受一个istream作为其左侧运算对象
 * 接受一个对象作为其右侧对象。
 */
