// quote.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* c++中的引用
* 
* 给变量起别名
* 
* 数据类型 &别名 = 原名；
* 原名与别名都是操作同一块内存地址
* 
* int a = 10;
* int &b = a;
* 
* 引用的注意事项：
*   引用必须要初始化
*   引用一旦被初始化，就不可更改（一旦指向a,就不能指向c）
* 
* 引用作函数参数：
*   函数传参时，可以利用引用的技术让形参修改实参
*   指针作为形参的一种替代方案
*   int swap(int &a, int &b)
*   {
*   }
*   swap(a,b);
* 
* 引用作函数返回值：
*   不能返回局部变量的引用(当返回一个引用时，被引用的对象不能超出作用域)
*   函数的调用可以作为左值
* 
	void swap(int &a, int &b);
	int& setValue(int i);

	int arr[] = {1,2,3,4,5,6,7,8};

	int main()
	{
		int a = 10, b = 20;
		cout << "Before:" << a << " " << b << endl;

		swap(a, b);
		cout << "After:" << a << " " << b << endl;

		cout << "before: ";
		for(int i=0; i<8; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		setValue(1) = 10;

		cout << "after ";
		for(int i=0; i<8; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		return 0;
	}

	void swap(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b= temp;
	}

	int& setValue(int i)
	{
		return arr[i];
	} 
*   
*   静态局部变量可以作为返回引用值：
*   int& test()
*   { 
*       static int a = 10;
*       return a;
*   }

	int &ref = test();
* 
* 
* 引用的本质：
*   引用的本质在c++内部实现是一个指针常量
*   int &ref = a;
*   相当于 int * const ref = &a;
* 
* 常量引用：
*   常量引用主要用来修饰形参，防止误操作
* 
*   void showValue(const int &val)
*   {
*    }
* 
*/

int main()
{
    std::cout << "Hello World!\n";
}

