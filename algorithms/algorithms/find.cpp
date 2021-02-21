/*
* 常用查找算法
* 
* find:
*	#include<algorithm>
* 
*	//查找内置数据类型
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>::iterator it = find(v.begin(), v.end(), 5); //查看是否有5
*	if(it != v.end())
*	{
*		cout << *it << endl;
*	}
* 
*	//查找自定义数据类型
*	class Person
*	{
*	public:
*		Person(string name, int age)
*		{
*			this->m_Name = name;
*			this->m_Age = age;
*		}
* 
*		bool operaotr==(const Person & p)
*		{
*			if(this.m_Name == p.m_Name && this.m_Age == p.m_Age)
*			{
*				return true;
*			}
*			return false;
*		}
* 
*		string m_Name;
*		int m_Age;
*	}
* 
*	vector<Person>v;
* 
*	Person p1("liruonan", 18);
*	Person p1("liruonan2", 18);
*	Person p1("liruonan3", 18);
*	Person p1("liruonan4", 18);
* 
*	v.push_back(p1);
*	v.push_back(p2);
*	v.push_back(p3);
*	v.push_back(p4);
* 
*	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
* 
*	if(it != v.end())
*	{
*		cout << *it << endl;
*	}
* 
* find_if:
* 
*	class GreaterFive
*	{
*	public:
*		bool operator()(int val)
*		{
*			return val > 5;
*		}
*	}
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
* 
* adjacent_find:
*	查找相邻重复元素
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
* 
* binary_search:
*	二分查找法
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	bool ret = binary_search(v.begin(), v.end(), 30);
* 
* count:
*	统计元素个数
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	int num = count(v.begin(), v.end(), 10);
* 
* count_if:
*	按条件统计元素个数
* 
*	class GreaterTen
*	{
*	public:
*		bool operator()(int val)
*		{
*			return val > 10;
*		}
*	}
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	int num = count_if(v.begin(), v.end(), GreaterTen());
* 
* 
* 
* 
* 
*/