/*
* deque
* 
* ˫�����飬���Զ�ͷ�����в���ɾ������
* 
* deque��vector������
*	vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�deque����ͷ���Ĳ���ɾ���ٶȱ�vector��
*	vector����Ԫ��ʱ���ٶȱ�vector�죬���������ڲ�ʵ���й�
* 
* deque�ڲ��и��п�����ά���Ŷ�λ������ĵ�ַ��ʹ��deque��һ�������ռ�
* deque����Ҳ��֧��������ʵ�
* 
* ���캯����
*	#include<deque>
* 
*	void printDeque(const deque<int>&d)
*	{
*		for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++) //const������
*		{
*			cout << *it << endl;
*		}
*	}
* 
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
* 
*	deque<int>d2(d1.begin(), d1.end()); //���丳ֵ
* 
*	deque<int>d3(10,100); //10��100
* 
*	deque<int>d4(d3); //��������
* 
* ��ֵ������
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
*	
*	deque<int>d2;
*	d2 = d1; //��ֵ
* 
*	d2.assign(d1.degin(), d1.end()); //���丳ֵ
*	
*	d2.assin(10, 100); //10��100
* 
* ��С������
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i);
*	}
* 
*	if(d1.empty())
*	{
*		cout << "��" << endl;
*	}
*	else
*	{
*		cout << d1.size() << endl;
*	}
* 
*	d1.resize(15); //��0���
*	d1.resize(15�� 1); //��1���
*   d1.resize(5); //��������ɾ��
* 
* ������ɾ����
*	deque<int>d1;
*	for(int i = 0; i < 10; i++)
*	{
*		d1.push_back(i); //β��
*	}
* 
*	d1.push_front(100); //ͷ��
* 
*	d1.pop_back(); //βɾ
*	d1.pop_front(); //ͷɾ
* 
*	d1.insert(d1.begin(), 1000); //ͷ������1000
*	d1.insert(d1.begin(), 2, 1000); //ͷ����������1000
* 
*	deque<int>d2;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
*	
*	d1.insert(d1.begin(), d2.begin(), d2.end()); //�����������
* 
*	deque<int>::iterator it = d1.begin();
*	it++;
*	d1.erase(it);
*	d1.erase(d1.begin(), d1.end()); //��������ɾ��
*	d1.clear(); //���
* 
* ���ݴ�ȡ��
*	deque<int>d1;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
* 
*	d1.push_front(100);
*	d1.push_front(200);
*	d1.push_front(300);
*	
*	d1[0]; //[]��ʽ
*	d1.at(0); //at��ʽ
*	d1.front(); //��һ��Ԫ��
*	d1.back(); //���һ��Ԫ��
* 
* ���������
* 
*	����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������	
* 
*	#include<algorithm>
*	
*	deque<int>d1;
*	d2.push_back(1);
*	d2.push_back(2);
*	d2.push_back(3);
*	d1.push_front(100);
*	d1.push_front(200);
*	d1.push_front(300);
* 
*	sort(d1.begin(), d1.end()); //����
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