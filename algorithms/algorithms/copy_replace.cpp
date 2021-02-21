/*
* 常用拷贝与替换算法
* 
* copy:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>v2;
*	v2.resize(v1.size());
* 
*	copy(v.begin(), v.end(), v2.begin()); //拷贝
* 
* replace:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	replace(v.begin(), v.end(), 20, 200); //替换
* 
* replace_if:
* 
*	class Greater30
*	{
*	public:
*		bool operator()(int val)
*		{
*			return val > 30;
*		}
*	}
* 
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	replace_if(v.begin(), v.end(), Greater30(), 300); //替换大于30的为300
* 
* swap:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	vector<int>v2;
*	v2.push_back(100);
*	v2.push_back(200);
*	v2.push_back(300);
*	v2.push_back(400);
* 
*	swap(v, v2);
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
* 
* 
* 
* 
* 
*/