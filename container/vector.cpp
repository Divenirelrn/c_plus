/*
* vector容器
* 
* vector容器类似于数组，也称为单端数组
* 
* 数组是静态空间，vector可以动态扩展
* 
* 动态扩展：
*	并不是在原有空间之后续接，而是寻找更大的空间，将原数据拷贝到新空间
* 
* 构造函数（vector容器的创建）：
*	vector的迭代器是支持随机访问的迭代器
*	
*	#include<vector>
* 
*	void printVector(vector<int>&v)
*	{
*		for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
*		{
*			cout << *it << " ";
*		}
*		cout << endl;
*	}
* 
*	vector<int>v1; //默认构造
	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	printVector(v1);
* 
*	vector<int>v2(v1.begin(), v1.end()); //区间
* 
*	vector<int>v3(10,100); //10个100
* 
*	vector<int>v4(v3); //拷贝构造
* 
* 赋值操作：
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	vector<int>v2;
*	v2 = v1; //=方式
* 
*	v2.assign(v1.begin(), v1.end()); //assign方式
* 
*	v2.assign(10, 100); //10个100
* 
* 容量和大小：
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	if(v1.empty())
*	{
*		cout << "空" << endl;
*	}
*	else
*	{
*		cout << v1.capacity() << endl; //容量（13）
*		cout << v1.size() << endl; //大小（10）
*	}
* 
*	v1.resize(15); //resize操作，后面补0
*	v1.resize(15， 100); //resize操作，后面补100
* 
*	v1.resize(5); //超出部分被删除
* 
* 插入与删除：
*	vector<int>v1;
*	
*	v1.push_back(10); //尾插
*	v1.push_back(20);
*	v1.push_back(30);
*	v1.push_back(40);
*	v1.push_back(50);
* 
*	v1.pop_back(); //尾删
* 
*	v1.insert(v1.begin(), 100); //在头部插入
*	v1.insert(v1.begin(), 2, 100); //在头部插入2个
*	
*	v1.erase(v1.begin()); //删除头部一个
*	v1.erase(v1.begin(), v1.end()); //删除全部
* 
*	v1.clear(); //清空
* 
* 数据存取：
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	v1.at(0); //at的方式
* 
*	v1.front(); //第一个元素
* 
*	v1.back(); //最后一个元素
* 
* 互换容器：
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	vector<int>v2;
*	for(int i = 10; i < 20; i++)
	{
		v2.push_back(i);
	}
* 
*	v1.swap(v2); //交换两个容器
* 
*	//实际用途（收缩内存空间）
*	vector<int>v;
*	for(int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
* 
*	v.resize(3); //此时size为3，但capacity仍然为130000+
* 
*	vector<int>(v).swap(v); //利用swap收缩内存
*		vector<int>(v) //匿名对象
* 
* 预留空间：
*	减少vector在动态扩展容量时的扩展次数
*	
*	vector<int>v;
*	v.reserve(100000);	
* 
*	int num = 0; //统计开辟内存（动态扩展）的次数
*	int *p = NULL;
*	for(int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if(p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
* 
*	cout << num << endl; //30次，加入reserve之后num=1
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