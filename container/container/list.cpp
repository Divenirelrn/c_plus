/*
* list容器(链表)
* 
* 迭代器支持双向，不支持随机访问
* list与vector是最常使用的容器
* 
* 将数据进行链式存储
* 
* 结点：
*	数据域
*	指针域
* 
* STL中的list是一个双向循环链表
* 
* 构造函数：
*	#include<list>
* 
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
*	
*	list<int>L2(L1.begin(), l1.end()); //区间方式创建
* 
*	list<int>L3(L2); //拷贝构造
* 
*	list<int>L4(10, 100); //10个100
* 
* 赋值与交换：
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	list<int>L2;
*	L2 = L1; //等号赋值
* 
*	list<int>L3;
*	L3.assign(L2.begin(), L2.end()); //区间赋值
*	
*	list<int>L4;
*	L4.assign(10, 100); //10个100
* 
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	list<int>L2;
*	L2.assign(10, 100);
* 
*	L1.swap(L2); //交换
* 
* 大小操作：
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	if(L1.empty())
*	{
*		cout << "空" << endl;
*	}
*	else
*	{
*		cout << L1.size() << endl;
*	}
* 
*	L1.resize(10); //后面补0
*	L1.resize(10, 100); //后面补100
*	L1.resize(3); //超出部分删除
*	
* 插入与删除：
*	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.push_front(100);
*	L.push_front(200);
*	L.push_front(300);
* 
*	L.pop_back(); //尾删
*	L.pop_front(); //头删
* 
*	list<int>::iterator it = L.begin(0;
*	it++;
*	L.insert(it, 1000);
*	it = L.begin();
*	L.erase(it);
*	
*	//移除
*	L.remove(10000); //删除10000，删除所有匹配的
* 
*	L.clear(); //清空
* 
* 数据存取：
	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.front(); //第一个元素
*	L.back(); //最后一个元素
* 
* 反转与排序：
*	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.reverse(); //反转
* 
*	//所有不支持随机访问的容器不能用标准算法
*	//不支持随机访问的容器， 内部会提供一些成员函数
*	L.sort(); //排序
* 
*	bool myCompare(int v1, int v2)
	{
		return v1 > v2; //降序
	}
* 
*	L.sort(myCompare); //逆序
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