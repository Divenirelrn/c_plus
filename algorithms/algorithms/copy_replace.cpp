/*
* ���ÿ������滻�㷨
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
*	copy(v.begin(), v.end(), v2.begin()); //����
* 
* replace:
*	vector<int>v;
*	v.push_back(10);
*	v.push_back(20);
*	v.push_back(30);
*	v.push_back(40);
* 
*	replace(v.begin(), v.end(), 20, 200); //�滻
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
*	replace_if(v.begin(), v.end(), Greater30(), 300); //�滻����30��Ϊ300
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