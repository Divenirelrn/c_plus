// template.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 模板
* 
* 泛型编程：主要利用的技术就是模板
* STL
* 
* 模板：建立通用的模具，大大提高复用性
* 
* 特点：
*   模板不可以直接使用，只是一个框架
* 
* 分类：
*   函数模板
*   类模板
*   
* 函数模板：
*   建立一个通用函数，其函数返回值类型与形参类型可以不具体制定，用一个虚拟的类型来代表
* 
*   template<typename T>
*   或：template<class T>
*   函数声明或定义
* 
*   交换两个数据：
*   正常写：交换两个整型、交换两个浮点型、...
*   模板：
*       template<typename T>  //声明模板
*       void mySwap(T &a, T &b)
*       {
*           T temp = a;
*           a = b;
*           b = temp;
*       }
*   
*   调用：
*       int a;
*       int b;
*       方式一（自动类型推导）：
*           mySwap(a, b);
*       方式二（显式指定类型）：
*           mySwap<int>(a,b);
* 
* 函数模板注意事项：
*   自动类型推导：必须推导出一致的数据类型，才可以使用
*   模板必须要确定出T的数据类型，才可以使用
* 
* 普通函数与函数模板的区别：
*   普通函数调用时可以发生自动类型转换（隐式类型转换）
*   函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
*   如果利用显式指定类型的方法，可以发生隐式类型转换
* 
*   int myAdd(int a, int b)
*   {
*       return a + b;
*   }
* 
*   int a = 10;
*   char c = 'a';
*   myAdd(a,c); //隐式类型转换
* 
* 普通函数与函数模板的调用规则：
*   普通函数与函数模板可以发生函数重载（普通函数与函数模板的名字可以相同）
*       一般不会出现
*   优先调用普通函数
*   可以通过空模板参数列表来强制调用函数模板：myPrint<>(a,b);
*   函数模板也可以发生重载
*   如果函数模板可以产生更好的匹配（类型），优先调用函数模板
*   
* 模板的局限性：
*   模板的通用性不是万能的
*   
*   为了解决自定义数据类型的操作，c++提供模板重载，为这些特定的类型提供具体的模板
* 
*   class Person
*   {
*   public:
* 
*       Person(string name, int age)
*       {
*           this->m_Name = name;
*           this->m_Age = age;
*       }
* 
*       string m_Name;
*       int m_Age;
*   };
*   
* 
*   template <class T>
*   bool myCompare(T &a, T &b)
*   {
*       if(a == b)
*       {
*           return true;
*       }
*       return false;
*   }
* 
*   //利用具体化的Person版本来实现代码，具体化优先调用(专门处理Person数据类型的模板)
*   template<> bool myCompare(Person &p1, Person &p2)
*   {
*       if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
*       {
*           return true;
*       }
*       return false;
*   }
* 
*   Person p1("liruonan", 18);
*   Person p2("liruonan", 18);
* 
*   bool ret = myCompare(p1, p2);
* 
* 类模板基本语法：
*   template<typename T>
*   类
*
*   template<class NameType, class AgeType>
*   class Person
*   {
*   public:
* 
*       Person(NameType name, AgeType age)
*       {
*           this->m_Name = name;
*           this->m_Age = age;
*       }
* 
*       NameType m_Name;
*       AgeType m_Age;
*   };
* 
*   调用：
*       Person<string, int> p1("liruonan", 18);
* 
* 类模板与函数模板的区别：
*   类模板没有自动类型推导的使用方式
*   类模板在模板参数列表中可以有默认参数
* 
*   template<class NameType, class AgeType = int>
* 
* 类模板中成员函数创建时机：
*   普通类中的成员函数一开始就可以创建
*   类模板中的成员函数在调用时才创建
* 
*   class Person1
*   {
*   public:
*       void showPerson1()
*       {
*           cout << "Person1" << endl;
*       }
*   };
* 
*   class Person2
*   {
*   public:
*       void showPerson2()
*       {
*           cout << "Person2" << endl;
*       }
*   };
* 
*   template<class T>
*   class MyClass
*   {
*   public:
        T obj;
            
        //类模板中的成员函数    
        void func1()
        {
            obj.showPerson1();
        }

        void func2()
        {
            obj.showPerson2();
        }
*   };
* 
*   MyClass<Person1> m;
*   m.func1(); //类模板中的成员函数在调用时才创建, 此时才确定T的类型
* 
* 类模板对象做函数参数：
*   类模板实例化出的对象，向函数传参的方式：
*       指定传入的类型（直接显示对象的数据类型）
*       参数模板化（将对象中的参数变为模板进行传递）
*       整个类模板化（将这个对象类型模板化进行传递）
* 
*   template<class T1, class T2>
*   class Person
*   {
*   public:
        Person(T1 name, T2 age)
        {
            this->m_Name = name;
            this->m_Age = age;
        }

        void showPerson()
        {
            cout << this->m_Name << this->m_Age << endl;
        }

        T1 m_Name;
        T2 m_Age;
* 
*   };
* 
*   //指定传入的类型
*   void printPerson1( Person<string, int>&p) 
*   {
*       p.showPerson();
*   }
* 
*   //参数模板化
*   template<class T1, class T2> 
*   void printPerson2( Person<T1, T2>&p)
*   {
*       p.showPerson();
*       cout << typeid(T1).name() << endl; //打印T1的类型
*   }
* 
*   //整个类模板化
*   template<class T> 
*   void printPerson3( T &p)
*   {
*       p.showPerson();
*   }
* 
*   Person<string, int>p("liruonan", 18);
*   printPerson1(p);
*   printPerson2(p);
*   printPerson3(p);
* 
* 类模板与继承：
*   当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
*   如果不指定，编译器无法给子类分配内存
*   如果想灵活指定父类T的类型，子类也需变为类模板
* 
*   template<class T>
*   class Base
*   {
*       T m;
*   };
*   
*   class Son :public Base<int> //指定出父类中T的类型
*   {
* 
*   };
*   
*   //如果想灵活指定父类T的类型，子类也需变为类模板
*   template<class T1, class T2>
*   class Son2 :public Base<T2>
*   {
*       T1 obj;
*   };
* 
*   Son2<int, char>s2;
* 
* 类模板成员函数类外实现：
*   template<class T1, class T2>
*   class Person
*   {
*   public:
*       Person(T1 name, T2 age); //构造函数声明
*       
*        void showPerson()
        {
            cout << this->m_Name << this->m_Age << endl;
        }

        T1 m_Name;
        T2 m_Age;
*    };
* 
*   //构造函数的类外实现
*   template<class T1, class T2>
*   Person<T1, T2>::Person(T1 name, T2 age)
*   {
*        this->m_Name = name;
         this->m_Age = age;
*    }
*
* 类模板成员函数分文件编写：
*   类模板成员函数的创建时机是在调用阶段，导致分文件编写时链接不到
* 
*   解决方案1（不推荐）：直接包含.cpp源文件
*   解决方案2：将声明与实现写到同一个文件，更改后缀名为.hpp(hpp并不是强制)
* 
*   //#include "person.cpp" //直接包含.cpp源文件（编译器直接看到.cpp中的内容）
*   #include "person.hpp"
*   
* 
*   Person <string, int>p("liruonan", 18);
*   p.showPerson();
* 
*   person.h:
*       #pragma once //防止头文件重复包含
*       #include <iostream>
*       using namesapce std;    
* 
*       template<class T1, class T2>
*       class Person
*       {
*       public:
*           Person(T1 name, T2 age); //构造函数声明
*       
*           void showPerson()
            {
                cout << this->m_Name << this->m_Age << endl;
            }

            T1 m_Name;
            T2 m_Age;
*       };
* 
*   person.cpp:
*       #include "person.h"
* 
*       template<class T1, class T2>
*       Person<T1, T2>::Person(T1 name, T2 age)
*       {
*           this->m_Name = name;
            this->m_Age = age;
*       }
* 
*   //将声明与实现写到同一个文件，更改后缀名为.hpp
*   person.hpp（类模板）:
*       #pragma once //防止头文件重复包含
*       #include <iostream>
*       using namesapce std;    
* 
*       template<class T1, class T2>
*       class Person
*       {
*       public:
*           Person(T1 name, T2 age); //构造函数声明
*       
*           void showPerson()
            {
                cout << this->m_Name << this->m_Age << endl;
            }

            T1 m_Name;
            T2 m_Age;
*       };
* 
*       template<class T1, class T2>
*       Person<T1, T2>::Person(T1 name, T2 age)
*       {
*           this->m_Name = name;
            this->m_Age = age;
*       }
*
* 
* 类模板与友元：
* 
*   //全局函数类外实现
*   template<class T1, class T2>
    class Person;

*   //全局函数类外实现
*   template<class T1, class T2>
*   void printPerson2(Person<T1, T2> p)
*   {
*        cout << p.m_Name << p.m_Age << endl;
*   }
* 
*   template<class T1, class T2>
    class Person
*   {
*       //全局函数类内实现
*       friend void printPerson(Person<T1, T2> p)
*       {
*           cout << p.m_Name << p.m_Age << endl;
*       }
* 
*       //全局函数类外实现
*       //加空模板参数列表
*       
*       friend void printPerson2<>(Person<T1, T2> p)；
* 
*    public:
*       Person(T1 name, T2 age) //构造函数声明
*       {
*           this->m_Name = name;
            this->m_Age = age;
*       }

     private:
        T1 m_Name;
        T2 m_Age;
*   };
* 
* 
* 
*   全局函数类内实现调用：
*       Person<string, int>p("liruonan", 18);
*       printPerson(p);
* 
*   全局函数类外实现调用：
*       Person<string, int>p("liruonan", 18);
*       printPerson2(p);
* 
* 类模板案例：
*   数组类封装
* 
*/

int main()
{
    std::cout << "Hello World!\n";
}
