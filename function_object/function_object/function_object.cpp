// function_object.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 函数对象
* 
* 仿函数
* 重载函数调用操作符的类，其对象称为函数对象
* 函数对象使用重载的()时，行为类似函数调用，因此也被称为仿函数
* 
* 函数对象（仿函数）本质上是一个类
* 
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 
* class MyAdd
* {
* public:
*   int operator()(int v1, int v2)
*   {
*       return v1 + v2;
*   }
*  }
* 
* MyAdd myAdd; //函数对象
* myAdd(10, 10); 
* 
* class MyPrint
* {
* public:
*   MyPrint()
*   {
*       this->count = 0;
*   }
* 
*   void operator()(string test)
*   {
*       cout << test << endl;
*       this->count++;
*   }
*   int count; //记录自己的状态
*  }
* 
* MyPrint myPrint;
* myPrint("Hello World!");
* 
* void doPrint(MyPrint &mp, string test)
* {
*   mp(test);
* }
* 
* doPrint(myPrint, "Hello shenzhen");
* 
* 谓词-一元谓词：
*   返回bool类的仿函数称为谓词
*   如果operator()接受一个参数，称为一元谓词  
*   如果operator()接受两个参数，称为两元谓词 
* 
*   vector<int>v;
*   for(int i = 0; i < 10; i++)
*   {
*       v.push_back(i);
*   }
* 
*   class GreaterFive
*   {
*   public:
*       bool operator()(int val)
*       {   
*           return val > 5;
*       }
*   }
* 
*   //查找是否有大于5的数字
*   vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
*   if(it == v.end())
*   {
*       cout << "否" << endl;
*   }
* 
* 谓词-二元谓词：
*   class MyCompare
* {
* public:
*   int operator()(int v1, int v2)
*   {
*       return v1 > v2;
*   }
*  }  
* 
*   vector<int>v;
*   for(int i = 0; i < 10; i++)
*   {
*       v.push_back(i);
*   }
*   
*   sort(v.begin(), v.end(), MyCompare);
* 
* 内建函数对象-算术仿函数：
*   STL内建了一些函数对象
*   #include<functional>
* 
*   negate<int>n; //取反仿函数
*   n(50); //-50
*   
*   plus<int>p; //相加仿函数
*   p(10, 20);
* 
*   minus
*   multiplies
*   divides
*   modulus //取余
* 
* 内建函数对象-关系仿函数：
*   #include<functional>
* 
*   equal_to
*   not_equal_to
*   greater
*   greater_equal
*   less
*   less_equal
* 
*   vector<int>v;
*   for(int i = 0; i < 10; i++)
*   {
*       v.push_back(i);
*   }
*   
*   sort(v.begin(), v.end(), greater<int>());
* 
* 内建函数对象-逻辑仿函数（基本用不到）：
*   logical_and
*   logical_or
*   logical_not
* 
*   vector<bool>v;
*   v.push_back(true);
*   v.push_back(true);
*   v.push_back(false);
*   v.push_back(false);
* 
*   vector<bool>v2;
*   v2.resize(v.size());
*   
*   transform(v.begin(), v.end(), v2.begin(), logic_not<bool>()); //取反后搬运
*   
*   
* 
* 
* 
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
