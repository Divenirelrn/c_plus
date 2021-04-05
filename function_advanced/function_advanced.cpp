// function_advanced.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

/*
* 函数高级
* 
* 函数的默认参数
*	int func(int a, int b=20)
*	{
*	 }
*	如果某个位置有默认值，那么之后都要有默认值
*	如果函数声明有默认参数，那么函数实现就不能有默认参数；
*	如果函数实现有默认参数，那么函数声明就不能有默认参数。
* 
* 函数的占位参数：
*	占位参数可以有默认参数
*	void func(int a, int)
*   {
*   }
* 
*	void func(int a, int = 10)
*   {
*   }
* 
* 函数重载：
*	函数名可以相同，提高重用性
* 
*	函数重载需满足的条件：
*		同一个作用域下
*		函数名相同
*		函数参数类型不同或个数不同或顺序不同
* 
*	void func()
*	{
*		cout << "liruonan" << endl;
*	}
* 
*	void func(int a)
*	{
*		cout << "lixiaokou" << endl;
*	}
*	
*	函数的返回值不能作为重载的条件
* 
*	引用作为函数重载的条件
*		void func(int &a) 
*		{
*			cout << "liruonan" << endl;
*		}		

		int a = 10;
		func(a);
* 
*		void func(const int &a) //func(10)
*		{
*			cout << "lixiaokou" << endl;
*		}	

		func(10);

* 
*	函数重载与默认参数（二义性，尽量避免）
* 
*		void func(int a, int b = 10) 
*		{
*			cout << "liruonan" << endl;
*		}		
* 
*		void func(int a)
*		{
*			cout << "lixiaokou" << endl;
*		}
* 
* 
* 
*/

void func()
{
	cout << "liruonan" << endl;
}

void func(int a)
{
	cout << "lixiaokou" << endl;
}

int main()
{
	
	cout << "Hello World!" << endl;
}
