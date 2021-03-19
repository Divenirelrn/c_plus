#include <iostream>
using namespace std;

/*
 * 多行注释
 *
 * #define PI 3.1415926
 * const int a = 10;
 *
 * 关键字：
 *   auto
 *   break
 *   new
 *   try
 *   this
 *
 * 标识符：
 *   区分大小写
 *
 * 后缀名：
 *   unix: C, cc, c, cxx
 *   GNU c++(linux): C, cc, c, cpp, cxx
 *   Borland c++: Cpp
 *   Microsoft Visual c++: cpp,cxx,cc
 *
 *
 */

int main() {
    const int a = 10; //变量,const 变量，只读属性
    cout << "a=" << a <<endl;
    system("pause"); //单行注释
    cout << "Hello World!" << endl;
    return 0;
}
