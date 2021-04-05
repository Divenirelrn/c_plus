/*
* 常用遍历算法：
*	三个头文件：
*		algorithm
*		numeric
*		functional
* 
* for_each:
*	#include<algorithm>
* 
*	void print1(int val)
*	{
*		cout << val << endl;
*	}
* 
*	class print2
*	{
*	public:
*		void operator()(int val)
*		{
*			cout << val << endl;
*		}
*	}
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	for_each(v.begin(), v.end(), print1); //普通函数
* 
*	for_each(v.begin(), v.end(), print2()); //仿函数
*	
* transform:拷贝算法
*	#include<algorithm>
* 
*	class Transform
*	{
*	public:
*		int operator()(int val)
*		{
*			return val;
*		}
*	}
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>vTarget;
*	vTarget.resize(v.size()); //目标容器需要提前开辟空间
* 
*	transform(v.begin(), v.end(), vTarget.begin(), Transform());
* 
*/
