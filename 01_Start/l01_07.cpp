#include <iostream> // header
/* 
 * 注释时对 /* */ 不能嵌套
 * "不能嵌套" 几个字会被认为是源码
 * 像剩余程序一样处理
 */
int main()
{
    return 0;
}
// /*
//  * 单行注释中的任何内容都会被忽略
//  * 包括嵌套注释对也一样会被忽略
//  */



// [Air@localhost 01_Start]$ g++ l01_07.cpp
// l01_07.cpp:3:23: error: stray ‘\344’ in program
//  * 注释时对 /* */ 不能嵌套
                       ^
