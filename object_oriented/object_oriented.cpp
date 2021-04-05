// object_oriented.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
/*
* 类与对象
* 
* class Circle
* {
*  public:
*       int m_r;
* 
*       double calCir()
*       {
*           return 2 * PI * m_r;
*       }
* 
* };
* 
* 访问权限：
*   public: 类内可以访问，类外也可以访问
*   protected：类内可以访问，类外不可以访问（继承时子类可以访问）
*   private：类内可以访问，类外不可以访问（继承时子类不能访问）
* 
* struct与class的区别：
*   struct默认权限为公共
*   class默认权限为私有
* 
* 成员属性私有化：
*   将所有成员属性私有化，可以控制读写权限
*   对于写权限，可以检测数据的有效性
* 
* 
*/

#define PI 3.14

class Circle
{
 public:
    int m_r;
    
    double calCir()
    {
       return 2 * PI * m_r;
    }
};

int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << c1.calCir() << endl;
}
