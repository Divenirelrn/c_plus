// STL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* STL（一个库）
* 
* stardard template library(标准模板库)
* 
* 为了建立数据结构与算法的一套标准，提高代码复用性，就诞生了STL
* 
* STL广义上分为:
*   容器（container）
*   算法（algorithm）
*   迭代器（iterator）
* 
* 容器与算法之间通过迭代器进行无缝连接
* 
* STL几乎所有的代码都采用了模板类或模板函数
* 
* STL分为6大组件：
*   容器：各种数据结构，如vector, list, deque, set, map，用来存放数据
*   算法：各种常用算法，如：sort,find,copy,for_each
*   迭代器:容器与算法之间的胶合剂
*   仿函数：行为类似函数，可作为算法的某种策略
*   适配器（配接器）：一种用来修饰容器或仿函数或迭代器的东西
*   空间配置器：负责空间的配置与管理
* 
* 容器：
*   STL容器将一些运用最广泛的数据结构实现出来
*   常用数据结构：数组、链表、树、栈、队列、集合、映射表
*   容器分类：
*       序列式容器：强调值的排序，每个元素有固定的位置
*       关联式容器：二叉树结构，各元素之间没有物理上的顺序关系
* 
* 算法：
*   质变算法：运算过程中会更改区间内的元素内容，如拷贝、替换、删除
*   非质变算法：运算过程中不会更改区间内的元素内容，如查找、计数、遍历、寻找极值等
* 
* 迭代器：
*   提供一种方法，使之能够依序某个容器所含的各个元素，而又无需暴露该容器内的内部表示方式
*   算法通过迭代器访问容器
*   每个容器有自己专属的迭代器
*   迭代器使用非常类似于指针
* 
*   迭代器种类：
        输入迭代器：对数据的只读访问
*       输出迭代器：对数据的只写访问
*       前向迭代器：读写操作，并能向前推进迭代器
*       双向迭代器：读写操作，并能前向后向操作
*       随机访问迭代器：读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器
*       *常用的是双向迭代器和随机访问迭代器
* 
* vector存放内置数据类型：
*   STL中最常用的数据结构为vector,类似于数组
*   
*   #include<vector>
*   #include<algorithm>
* 
*   void myPrint(int val)
*   {
*       cout << val << endl;
*   }
* 
*   void test()
*   {
*       vector<int> v;
*       //向容器插入数据
*       v.push_back(10);
*       v.push_back(20);
*       v.push_back(30);
*       //通过迭代器来访问数据
*       Vector<int>::iterator itBegin = v.begin(); //起始迭代器，指向容器中第一个元素
*       Vector<int>::iterator itEnd = v.end(); //起始迭代器，指向容器中最后一个元素的后一个位置
*       //第一种遍历方式
*       while (itBegin != itEnd)
*       {                                                                                                                   *内联函数
*           cout << *itBegin << endl;
*           itBegin++;
*       }
*       //第二种遍历方式（推荐）
*       for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
*       {
*           cout << *it << endl;
*       }
*       //第三种遍历方式（利用遍历算法）
*       for_each(v.begin(), v.end(), myPrint); //利用回调技术（在遍历期间调用回调函数）
*       
*   }
* 
* vector存放自定义数据类型：
*   class Person
*   {
*   public:
* 
*       Person(string name, int age)
        {
            this->m_Name = name;
            this->m_Age = age;
         }
* 
*       string m_Name;
*       int m_Age;
*   };
*   
*   vector<Person>v;
* 
*   Person p1("liruonan", 18);
*   Person p2("liruonan2", 19);
*   Person p3("liruonan3", 20);
*   Person p4("liruonan4", 21);
* 
*   v.push_back(p1);
*   v.push_back(p2);
*   v.push_back(p3);
*   v.push_back(p4);
* 
*   //遍历
*   for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
*   {
*       cout << (*it).m_Name << (*it).m_Age << endl;
*       cout << it->m_Name << it->m_Age << endl;
*   }
* 
*   //存放自定义数据的指针
*   v.push_back(&p1);
*   v.push_back(&p2);
*   v.push_back(&p3);
*   v.push_back(&p4);
* 
*   //遍历
*   for(vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
*   {
*       cout << （*it）->m_Name << （*it）->m_Age << endl;
*   }
* 
* 容器嵌套容器：
*   void test()
*   {
        vector< vector <int>>v;

        //创建小容器
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;

        for(int i=0; i < 4; i++)
        {
            v1.push_back(i+1);
            v2.push_back(i+2);
            v3.push_back(i+3);
            v4.push_back(i+4);
        }

        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);
        v.push_back(v4);

        for(vector< vector<int>>::iterator it = v.begin(); it != v.end(); it++)
        {
            for(vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
            {
                cout << *vit << " ";
            }
            cout << endl;
        }
    }
* 
* 
* 
* 
* 
* 
*/

int main()
{
    std::cout << "Hello World!\n";
}
