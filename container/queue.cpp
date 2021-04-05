/*
* queue容器
* 
*	队列，先进先出
*	
* 常用接口：
*	#include<queue>
* 
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
*	};
* 
*	queue<Person>q;
*	
*	Person p1("liruonan", 18);
*	Person p1("liruonan2", 18);
*	Person p1("liruonan3", 18);
*	Person p1("liruonan4", 18);
* 
*	q.push(p1);
*	q.push(p2);
*	q.push(p3);
*	q.push(p4);
* 
*	while(!q.empty())
*	{
*		cout << q.front().m_Name << q.front().m_Age() << endl; 
*		cout << q.back().m_Name << q.back().m_Age() << endl; 
*		q.pop();
*	}
* 
*	cout << q.size() << endl;
* 
* 
*/