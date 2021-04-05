/*
* 常用集合算法
* 
* set_intersection:
*	求两个集合的交集
*	两个集合必须是有序集合
* 
*	#include<algorithm>
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>v2;
*	v2.push_back(10);
*	v2.push_back(60);
*	v2.push_back(30);
*	v2.push_back(70);
* 
*	vector<int>vTarget;
*	vTarget.resize(min(v.size(), v2.size()));
* 
*	vector<int>::iterator it = set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), vTarget.begin());
*	
* set_union:
*	求两个集合的并集
*	两个集合必须是有序序列
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>v2;
*	v2.push_back(10);
*	v2.push_back(60);
*	v2.push_back(30);
*	v2.push_back(70);
* 
*	vector<int>vTarget;
*	vTarget.resize(v.size() + v2.size());
* 
*	vector<int>::iterator it = set_union(v.begin(), v.end(), v2.begin(), v2.end(), vTarget.begin());
* 
* set_different:
*	求两个集合的差集
*	两个集合必须是有序序列
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>v2;
*	v2.push_back(10);
*	v2.push_back(60);
*	v2.push_back(30);
*	v2.push_back(70);
* 
*	vector<int>vTarget;
*	vTarget.resize(max(v.size(), v2.size()));
* 
*	vector<int>::iterator it = set_different(v.begin(), v.end(), v2.begin(), v2.end(), vTarget.begin());
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