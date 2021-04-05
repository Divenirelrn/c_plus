/*
* 常用排序算法
* 
* sort:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(10);
*	v.push_back(30);
*	v.push_back(40);
* 
*	sort(v.begin(), v.end()); //默认从小到大
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
*	srand((unsigned int) time(NULL)); //根据时间生成随机数种子
*	random_shuffle(v.begin(), v.end());
* 
* merge:
*	两个容器合并，存储到另一个容器中
*	两个容器必须是有序的
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
*	反转
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	reverse(v.begin(), v.end()); //反转
* 
* 
* 
* 
* 
* 
* 
*/