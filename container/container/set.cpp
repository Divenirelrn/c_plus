/*
* set/multiset容器
* 
* 所有元素插入时自动排序
* 
* 关联式容器，底层实现是二叉树
* 
* set不允许容器内有重复元素
* multiset允许容器内有重复元素
* 
* 构造与赋值：
*	#include<set>
* 
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	set<int>s2(s1); //拷贝构造
*	
*	set<int>s3；
*	s3 = s2; //等号赋值
* 
* 大小与交换：
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	if(s1.empty())
*	{
*		cout << "空" << endl;
*	}
*	else
*	{
*		cout << s1.size() << endl;
*	}
* 
*	//交换
*	set<int>s2;
*	s2.insert(100);
*	s2.insert(200);
*	s2.insert(300);
*	s2.insert(400);
* 
*	s1.swap(s2); 
* 
* 插入与删除：
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	s1.erase(s1.begin()); //删除
*	s1.erase(30); 
*	s1.erase(s1.begin(), s1.end());
*	s1.clear(); //清空
* 
* 查找与统计：
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	set<int>::iterator pos = s1.find(30); //查找
*	if(pos != s1.end())
*	{
*		cout << *pos;
*	}
* 
*	int num = s1.count(30); //统计
* 
* set与multiset的区别：
*	set不允许有重复（会检测插入值）
*	set插入时有返回值
*	
*	set<int>s;
* 
*	pair<set<int>::iterator, bool> ret = s.insert(10);
* 
*	if(ret.second)
*	{
*		cout << "第一次插入成功" << endl;
*	}
*	else
*	{	
*		cout << "第一次插入失败" << endl;
*	}
* 
*	ret = s.insert(10);
*	if(ret.second)
*	{
*		cout << "第二次插入成功" << endl;
*	}
*	else
*	{	
*		cout << "第二次插入失败" << endl;
*	}
* 
*	multiset<int>ms;
* 
*	ms.insert(10);
*	ms.insert(10);
* 
* pair使用-pair对组的创建：
*	对组：成对出现的数据
*	pair<string, int>p("liruonan", 18);
*	
*	cout << p.first << p.second << endl;
* 
*	pair<string, int>p2 = make_pair("liruonan", 18);
* 
* 内置类型指定排序方式：
*	利用仿函数，可以改变排序规则
* 
*	class MyCompare
*	{
*	public:
*		bool operator()(int v1, int v2) //仿函数
*		{
*			return v1 > v2; //降序
*		}
*	}
* 
*	set<int, MyCompare>s1;
* 
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
*	
* 自定义类型指定排序方式：
*	class Person
*	{
*	public:
*		Person(string name, int age)
*		{
*			this->m_Name = name;
*			this->m_Age = age;
*		}
* 
*		string m_Name;
*		int m_Age;
*	}
* 
*	//自定义数据类型需要指定排序规则
* 
*	class ComparePerson
*	{
*	public:
*		bool operator()(const Person&p1, const Person&p2)
*		{
*			return p1.m_Age > p2.m_Age; //降序
*		}
*	}
* 
*	set<Person, ComparePerson>s;
*	
*	Person p1("liruonan", 18);
*	Person p1("liruonan2", 20);
*	Person p1("liruonan3", 19);
*	Person p1("liruonan4", 16);
* 
*	s.insert(p1);
*	s.insert(p2);
*	s.insert(p3);
*	s.insert(p4);
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
* 
* 
* 
*/