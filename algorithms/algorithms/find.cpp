/*
* ���ò����㷨
* 
* find:
*	#include<algorithm>
* 
*	//����������������
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>::iterator it = find(v.begin(), v.end(), 5); //�鿴�Ƿ���5
*	if(it != v.end())
*	{
*		cout << *it << endl;
*	}
* 
*	//�����Զ�����������
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
*	���������ظ�Ԫ��
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
* 
* binary_search:
*	���ֲ��ҷ�
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
*	ͳ��Ԫ�ظ���
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
*	������ͳ��Ԫ�ظ���
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