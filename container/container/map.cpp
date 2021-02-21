/*
* map/multimap容器
* 
* key:value
* 所有元素都会根据元素的键值自动排序
* 
* 关联式容器，底层用二叉树实现
* 
* map不允许重复key值
* multimap允许重复key值
* 
* 构造与赋值：
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
* 大小与交换：
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(pair<int,int>(2,20));
*	mp.insert(pair<int,int>(3,30));
*	mp.insert(pair<int,int>(4,40));
* 
*	if(mp.empty())
*	{
*		cout << "空" << endl;
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
* 插入与删除：
*	map<int, int> mp;
*	
*	mp.insert(pair<int,int>(1,10));
*	mp.insert(make_pair(2,20));
*	mp.insert(map<int,int>::value_type(3,30));
*	mp[4] = 40; //不推荐用于插入，可用于mp[4]访问元素
* 
*	mp.erase(mp.begin());
*	mp.erase(2);
*	mp.erase(mp.begin(), mp.end());
* 
*	mp.clear(); //清空
* 
* 查找与统计：
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
*	//统计
*	int num = mp.count(3); 
* 
* 排序：
* 
*	class MyCompare
*	{
*	public:
*		bool operator()(int v1, int v2)
*		{
*			return v1 > v2; //降序
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