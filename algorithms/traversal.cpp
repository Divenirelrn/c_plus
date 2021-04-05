/*
* ���ñ����㷨��
*	����ͷ�ļ���
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
*	for_each(v.begin(), v.end(), print1); //��ͨ����
* 
*	for_each(v.begin(), v.end(), print2()); //�º���
*	
* transform:�����㷨
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
*	vTarget.resize(v.size()); //Ŀ��������Ҫ��ǰ���ٿռ�
* 
*	transform(v.begin(), v.end(), vTarget.begin(), Transform());
* 
*/
