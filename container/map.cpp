/*
* map/multimap����
* 
* key:value
* ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
* 
* ����ʽ�������ײ��ö�����ʵ��
* 
* map�������ظ�keyֵ
* multimap�����ظ�keyֵ
* 
* �����븳ֵ��
*	#include<map>
* 
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(pair<int,int>(2,20));
*	mp.insert(pair<int,int>(3,30));
*	mp.insert(pair<int,int>(4,40));
* 
*	map<int, int> mp2(mp);
* 
*	map<int, int> mp2;
*	mp2 = mp;
* 
* ��С�뽻����
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(pair<int,int>(2,20));
*	mp.insert(pair<int,int>(3,30));
*	mp.insert(pair<int,int>(4,40));
* 
*	if(mp.empty())
*	{
*		cout << "��" << endl;
*	}
*	else
*	{
*		cout << mp.size() << endl;
*	}
* 
*	map<int, int> mp2;
*	
*	mp2.insert(pair<int,int>(5,100));
*	mp2.insert(pair<int,int>(6,200));
*	mp2.insert(pair<int,int>(7,300));
*	mp2.insert(pair<int,int>(8,400));
* 
*	mp.swap(mp2);
* 
* ������ɾ����
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(make_pair(2,20));
*	mp.insert(map<int,int>::value_type(3,30));
*	mp[4] = 40; //���Ƽ����ڲ��룬������mp[4]����Ԫ��
* 
*	mp.erase(mp.begin());
*	mp.erase(2);
*	mp.erase(mp.begin(), mp.end());
* 
*	mp.clear(); //���
* 
* ������ͳ�ƣ�
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(pair<int,int>(2,20));
*	mp.insert(pair<int,int>(3,30));
*	mp.insert(pair<int,int>(4,40));
*	
*	map<int,int>::iterator pos = mp.find(3);
*	if(pos != mp.end())
*	{
*		cout << *pos << endl;
*	}
* 
*	//ͳ��
*	int num = mp.count(3); 
* 
* ����
* 
*	class MyCompare
*	{
*	public:
*		bool operator()(int v1, int v2)
*		{
*			return v1 > v2; //����
*		}
*	}
* 
*	map<int, int, MyCompare> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(pair<int,int>(2,20));
*	mp.insert(pair<int,int>(3,30));
*	mp.insert(pair<int,int>(4,40));
* 
*	
* 
* 
* 
* 
* 
*/