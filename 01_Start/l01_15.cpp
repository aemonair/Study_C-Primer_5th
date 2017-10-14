#include <iostream>

#define SYNATX_ERROR 0
#define TYPE_ERROR 0
#define DECLARATION_ERROR 1

#if  SYNATX_ERROR
//错误： main的参数列表漏掉了
int main(
{
    // 错误: endl后使用了冒号而非分号
    std::cout << "Read each file." << std::endl:
    // 错误：字符串字面常量的两侧漏掉了引号
    std::cout << Update master. << std::endl;
    // 错误：漏掉了 第二个输出运算符
    std::cout << "Write new master."  std:: endl;

    return 0;
}

#elif TYPE_ERROR

int func(int a);

func("Hello");

#elif DECLARATION_ERROR
#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2; //错误：使用了"v"而非"v1"
    // 错误：cout未定义；应该是std::cout
    cout << v1 + v2 << std::endl;
    return 0;
}

/*
 *
  l01_15.cpp:9:9: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]
  int main(
         ^
  l01_15.cpp:12:48: error: found ‘:’ in nested-name-specifier, expected ‘::’
       std::cout << Read each file. << std::endl:
                                                ^
  l01_15.cpp:12:44: error: ‘std::endl’ is not a class or namespace
       std::cout << Read each file. << std::endl:
                                            ^
  l01_15.cpp:14:18: error: ‘Update’ was not declared in this scope
       std::cout << Update master. << std::endl;
                  ^
  l01_15.cpp:14:25: error: expected ‘}’ before ‘master’
       std::cout << Update master. << std::endl;
                         ^
  l01_15.cpp:14:25: error: expected ‘)’ before ‘master’
  l01_15.cpp:16:5: error: ‘cout’ in namespace ‘std’ does not name a type
       std::cout << Write new master.  std:: endl;
       ^
  l01_15.cpp:18:5: error: expected unqualified-id before ‘return’
       return 0;
       ^
  l01_15.cpp:19:1: error: expected declaration before ‘}’ token
  }
 *
 */
////////////////////////////////////////////////////////////////////
/*
  l01_15.cpp:7:0: error: unterminated #elif  #if  SYNATX_ERROR  ^ 
  l01_15.cpp:25:5: error: expected constructor, destructor, or type conversion before ‘(’ token  func(Hello);
*/
/////////////////////////////////////////////////////////////////////


/* 
[Air@localhost 01_Start]$ g++ l01_15.cpp l01_15.cpp:7:0: error: unterminated #elif  #if  SYNATX_ERROR  ^ l01_15.cpp: In function ‘int main()’: l01_15.cpp:32:17: error: ‘v’ was not declared in this scope      std::cin >> v >> v2; //错误：使用了v而非v1                  ^ l01_15.cpp:34:5: error: ‘cout’ was not declared in this scope      cout << v1 + v2 << std::endl;      ^ l01_15.cpp:34:5: note: suggested alternative: In file included from l01_15.cpp:1:0: /usr/include/c++/4.8.2/iostream:61:18: note:   ‘std::cout’    extern ostream cout;  /// Linked to standard output                   ^
*/
