/*
* list����(����)
* 
* ������֧��˫�򣬲�֧���������
* list��vector���ʹ�õ�����
* 
* �����ݽ�����ʽ�洢
* 
* ��㣺
*	������
*	ָ����
* 
* STL�е�list��һ��˫��ѭ������
* 
* ���캯����
*	#include<list>
* 
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
*	
*	list<int>L2(L1.begin(), l1.end()); //���䷽ʽ����
* 
*	list<int>L3(L2); //��������
* 
*	list<int>L4(10, 100); //10��100
* 
* ��ֵ�뽻����
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	list<int>L2;
*	L2 = L1; //�ȺŸ�ֵ
* 
*	list<int>L3;
*	L3.assign(L2.begin(), L2.end()); //���丳ֵ
*	
*	list<int>L4;
*	L4.assign(10, 100); //10��100
* 
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	list<int>L2;
*	L2.assign(10, 100);
* 
*	L1.swap(L2); //����
* 
* ��С������
*	list<int>L1;
*	L1.push_back(10);
*	L1.push_back(20);
*	L1.push_back(30);
*	L1.push_back(40);
* 
*	if(L1.empty())
*	{
*		cout << "��" << endl;
*	}
*	else
*	{
*		cout << L1.size() << endl;
*	}
* 
*	L1.resize(10); //���油0
*	L1.resize(10, 100); //���油100
*	L1.resize(3); //��������ɾ��
*	
* ������ɾ����
*	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.push_front(100);
*	L.push_front(200);
*	L.push_front(300);
* 
*	L.pop_back(); //βɾ
*	L.pop_front(); //ͷɾ
* 
*	list<int>::iterator it = L.begin(0;
*	it++;
*	L.insert(it, 1000);
*	it = L.begin();
*	L.erase(it);
*	
*	//�Ƴ�
*	L.remove(10000); //ɾ��10000��ɾ������ƥ���
* 
*	L.clear(); //���
* 
* ���ݴ�ȡ��
	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.front(); //��һ��Ԫ��
*	L.back(); //���һ��Ԫ��
* 
* ��ת������
*	list<int>L;
*	L.push_back(10);
*	L.push_back(20);
*	L.push_back(30);
*	L.push_back(40);
* 
*	L.reverse(); //��ת
* 
*	//���в�֧��������ʵ����������ñ�׼�㷨
*	//��֧��������ʵ������� �ڲ����ṩһЩ��Ա����
*	L.sort(); //����
* 
*	bool myCompare(int v1, int v2)
	{
		return v1 > v2; //����
	}
* 
*	L.sort(myCompare); //����
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