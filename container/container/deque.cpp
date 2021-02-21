/*
* deque
* 
* 双端数组，可以对头部进行插入删除操作
* 
* deque与vector的区别：
*	vector对于头部的插入删除效率低，deque对于头部的插入删除速度比vector快
*	vector访问元素时的速度比vector快，这与两者内部实现有关
* 
* deque内部有个中控器，维护着多段缓冲区的地址，使得deque像一块连续空间
* deque容器也是支持随机访问的
* 
* 构造函数：
*	#include<deque>
* 
*	void printDeque(const deque<int>&d)
*	{
*		for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++) //const迭代器
*		{
*			cout << *it << endl;
*		}
*	}
* 
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
* 
*	deque<int>d2(d1.begin(), d1.end()); //区间赋值
* 
*	deque<int>d3(10,100); //10个100
* 
*	deque<int>d4(d3); //拷贝构造
* 
* 赋值操作：
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
*	
*	deque<int>d2;
*	d2 = d1; //赋值
* 
*	d2.assign(d1.degin(), d1.end()); //区间赋值
*	
*	d2.assin(10, 100); //10个100
* 
* 大小操作：
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
* 
*	if(d1.empty())
*	{
*		cout << "空" << endl;
*	}
*	else
*	{
*		cout << d1.size() << endl;
*	}
* 
*	d1.resize(15); //用0填充
*	d1.resize(15， 1); //用1填充
*   d1.resize(5); //超出部分删除
* 
* 插入与删除：
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i); //尾插
*	}
* 
*	d1.push_front(100); //头插
* 
*	d1.pop_back(); //尾删
*	d1.pop_front(); //头删
* 
*	d1.insert(d1.begin(), 1000); //头部插入1000
*	d1.insert(d1.begin(), 2, 1000); //头部插入两个1000
* 
*	deque<int>d2;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
*	
*	d1.insert(d1.begin(), d2.begin(), d2.end()); //按照区间插入
* 
*	deque<int>::iterator it = d1.begin();
*	it++;
*	d1.erase(it);
*	d1.erase(d1.begin(), d1.end()); //按照区间删除
*	d1.clear(); //清空
* 
* 数据存取：
*	deque<int>d1;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
* 
*	d1.push_front(100);
*	d1.push_front(200);
*	d1.push_front(300);
*	
*	d1[0]; //[]方式
*	d1.at(0); //at方式
*	d1.front(); //第一个元素
*	d1.back(); //最后一个元素
* 
* 排序操作：
* 
*	对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序	
* 
*	#include<algorithm>
*	
*	deque<int>d1;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
*	d1.push_front(100);
*	d1.push_front(200);
*	d1.push_front(300);
* 
*	sort(d1.begin(), d1.end()); //排序
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