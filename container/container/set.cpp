/*
* set/multiset����
* 
* ����Ԫ�ز���ʱ�Զ�����
* 
* ����ʽ�������ײ�ʵ���Ƕ�����
* 
* set���������������ظ�Ԫ��
* multiset�������������ظ�Ԫ��
* 
* �����븳ֵ��
*	#include<set>
* 
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	set<int>s2(s1); //��������
*	
*	set<int>s3��
*	s3 = s2; //�ȺŸ�ֵ
* 
* ��С�뽻����
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	if(s1.empty())
*	{
*		cout << "��" << endl;
*	}
*	else
*	{
*		cout << s1.size() << endl;
*	}
* 
*	//����
*	set<int>s2;
*	s2.insert(100);
*	s2.insert(200);
*	s2.insert(300);
*	s2.insert(400);
* 
*	s1.swap(s2); 
* 
* ������ɾ����
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	s1.erase(s1.begin()); //ɾ��
*	s1.erase(30); 
*	s1.erase(s1.begin(), s1.end());
*	s1.clear(); //���
* 
* ������ͳ�ƣ�
*	set<int>s1;
*	s1.insert(10);
*	s1.insert(20);
*	s1.insert(30);
*	s1.insert(40);
* 
*	set<int>::iterator pos = s1.find(30); //����
*	if(pos != s1.end())
*	{
*		cout << *pos;
*	}
* 
*	int num = s1.count(30); //ͳ��
* 
* set��multiset������
*	set���������ظ����������ֵ��
*	set����ʱ�з���ֵ
*	
*	set<int>s;
* 
*	pair<set<int>::iterator, bool> ret = s.insert(10);
* 
*	if(ret.second)
*	{
*		cout << "��һ�β���ɹ�" << endl;
*	}
*	else
*	{	
*		cout << "��һ�β���ʧ��" << endl;
*	}
* 
*	ret = s.insert(10);
*	if(ret.second)
*	{
*		cout << "�ڶ��β���ɹ�" << endl;
*	}
*	else
*	{	
*		cout << "�ڶ��β���ʧ��" << endl;
*	}
* 
*	multiset<int>ms;
* 
*	ms.insert(10);
*	ms.insert(10);
* 
* pairʹ��-pair����Ĵ�����
*	���飺�ɶԳ��ֵ�����
*	pair<string, int>p("liruonan", 18);
*	
*	cout << p.first << p.second << endl;
* 
*	pair<string, int>p2 = make_pair("liruonan", 18);
* 
* ��������ָ������ʽ��
*	���÷º��������Ըı��������
* 
*	class MyCompare
*	{
*	public:
*		bool operator()(int v1, int v2) //�º���
*		{
*			return v1 > v2; //����
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
* �Զ�������ָ������ʽ��
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
*	//�Զ�������������Ҫָ���������
* 
*	class ComparePerson
*	{
*	public:
*		bool operator()(const Person&p1, const Person&p2)
*		{
*			return p1.m_Age > p2.m_Age; //����
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