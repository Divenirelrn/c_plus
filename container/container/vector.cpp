/*
* vector����
* 
* vector�������������飬Ҳ��Ϊ��������
* 
* �����Ǿ�̬�ռ䣬vector���Զ�̬��չ
* 
* ��̬��չ��
*	��������ԭ�пռ�֮�����ӣ�����Ѱ�Ҹ���Ŀռ䣬��ԭ���ݿ������¿ռ�
* 
* ���캯����vector�����Ĵ�������
*	vector�ĵ�������֧��������ʵĵ�����
*	
*	#include<vector>
* 
*	void printVector(vector<int>&v)
*	{
*		for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
*		{
*			cout << *it << " ";
*		}
*		cout << endl;
*	}
* 
*	vector<int>v1; //Ĭ�Ϲ���
	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	printVector(v1);
* 
*	vector<int>v2(v1.begin(), v1.end()); //����
* 
*	vector<int>v3(10,100); //10��100
* 
*	vector<int>v4(v3); //��������
* 
* ��ֵ������
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	vector<int>v2;
*	v2 = v1; //=��ʽ
* 
*	v2.assign(v1.begin(), v1.end()); //assign��ʽ
* 
*	v2.assign(10, 100); //10��100
* 
* �����ʹ�С��
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	if(v1.empty())
*	{
*		cout << "��" << endl;
*	}
*	else
*	{
*		cout << v1.capacity() << endl; //������13��
*		cout << v1.size() << endl; //��С��10��
*	}
* 
*	v1.resize(15); //resize���������油0
*	v1.resize(15�� 100); //resize���������油100
* 
*	v1.resize(5); //�������ֱ�ɾ��
* 
* ������ɾ����
*	vector<int>v1;
*	
*	v1.push_back(10); //β��
*	v1.push_back(20);
*	v1.push_back(30);
*	v1.push_back(40);
*	v1.push_back(50);
* 
*	v1.pop_back(); //βɾ
* 
*	v1.insert(v1.begin(), 100); //��ͷ������
*	v1.insert(v1.begin(), 2, 100); //��ͷ������2��
*	
*	v1.erase(v1.begin()); //ɾ��ͷ��һ��
*	v1.erase(v1.begin(), v1.end()); //ɾ��ȫ��
* 
*	v1.clear(); //���
* 
* ���ݴ�ȡ��
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	v1.at(0); //at�ķ�ʽ
* 
*	v1.front(); //��һ��Ԫ��
* 
*	v1.back(); //���һ��Ԫ��
* 
* ����������
*	vector<int>v1;
*	for(int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
*	
*	vector<int>v2;
*	for(int i = 10; i < 20; i++)
	{
		v2.push_back(i);
	}
* 
*	v1.swap(v2); //������������
* 
*	//ʵ����;�������ڴ�ռ䣩
*	vector<int>v;
*	for(int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
* 
*	v.resize(3); //��ʱsizeΪ3����capacity��ȻΪ130000+
* 
*	vector<int>(v).swap(v); //����swap�����ڴ�
*		vector<int>(v) //��������
* 
* Ԥ���ռ䣺
*	����vector�ڶ�̬��չ����ʱ����չ����
*	
*	vector<int>v;
*	v.reserve(100000);	
* 
*	int num = 0; //ͳ�ƿ����ڴ棨��̬��չ���Ĵ���
*	int *p = NULL;
*	for(int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if(p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
* 
*	cout << num << endl; //30�Σ�����reserve֮��num=1
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