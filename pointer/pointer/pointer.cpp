// pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

/*
* 指针
* 
* 可以通过指针间接访问内存（地址）
* 
* 定义：
*     int *p;
*     p = &a; //取址
*     *p = 1000; //修改地址的值
* 
* 指针占用的内存空间：
*    指针全部占用4个字节（32位操作系统）
* 
* 空指针：
*     初始化指针变量
*     int *p = NULL;
*     空指针不可访问
* 
* 野指针：
*     指针变量指向非法内存空间
*     int *p = (int *)0x1100;  
* 
* const修饰指针：
*   常量指针：
*       const int *p = &a;
*       指针的指向可以修改，但指针指向的值不能修改
*   指针常量：
*       int * const p = &a;
*       指针的指向不可修改，但指针指向的值可以修改
*   既修饰指针，又修饰常量：
*       const int * const p = &a;
*       指针的指向不可修改，但指针指向的值不可修改
* 
* 指针与数组：
*   int arr[] = {1,2,3,4,5};
*   int *p = arr;
*   int *p;
*   p = arr;
*   cout << *p << endl;
*   p++;
*   cout << *p << endl;
* 
* 指针与函数：
*   地址传递
*   需要改变实参，用地址传递；不需要改变实参，用值传递
*   int swap(int *p1, int *p2);
*   swap(&a, &b);
*   
* 
*/

int main()
{
    cout << sizeof(int*) << endl;
    cout << "Hello World!\n";
}

