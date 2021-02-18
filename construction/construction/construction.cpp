// construction.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 结构体
* 
* struct Student
*{
*   string name;
*   int num;
*   int age;
* };
* 
* struct Student s1, s2;
* 
* struct Student
*{
*   string name;
*   int num;
*   int age;
* } s1, s2;
* 
* s1.name = "liruonan";
* 
* 
* 结构体数组：
*   struct Student arr[3] = 
*   {
*       {...},
*       {...}
*    };
* 
*   arr[1].name = "liruonan";
* 
* 结构体指针：
*   struct Student *p = &stu;
*   或：Student *p = &stu;
*   p -> name = "liruonan";
* 
* 结构体嵌套
* 
* 结构体作函数参数：
*   值传递
*   地址传递
*   
* 结构体中const使用场景：
*   用const防止误操作
*   值传递会拷贝一份数据
*   地址传递可以节省内存
*   void printStudent(const student *s) //加入const，将参数设为只读
*   {
*    }
*   
* 
* 
* 
*/

int main()
{
    std::cout << "Hello World!\n";
}

