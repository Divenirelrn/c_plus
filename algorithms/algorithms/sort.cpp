/*
* ���������㷨
* 
* sort:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	sort(v.begin(), v.end()); //Ĭ�ϴ�С����
* 
*	sort(v.begin(), v.end(), greater<int>());
* 
* random_shuffle:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	#include<ctime>
*	srand((unsigned int) time(NULL)); //����ʱ���������������
*	random_shuffle(v.begin(), v.end());
* 
* merge:
*	���������ϲ����洢����һ��������
*	�������������������
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
*	
*	vector<int>v2;
*	v.push_back(100);
*	v.push_back(200);
*	v.push_back(300);
*	v.push_back(400);
* 
*	vector<int>vTarget;
*	vTarget.resize(v.size() + v2.size(0);
* 
*	merge(v.begin(), v.end(), v2.begin(), v2.end(), vTarget.begin());
* 
* reverse:
*	��ת
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	reverse(v.begin(), v.end()); //��ת
* 
* 
* 
* 
* 
* 
* 
*/