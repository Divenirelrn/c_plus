/*
* ���������
* 
* �����е���������¶��壬����Ӧ��ͬ����������
* ���������֧�ֺ�������
* 
* �Ӻ���������أ�
*	ʵ�ֶ������
* 
*	class Person
*	{
*	public:
*	
*		//��Ա�������Ӻ����������
*		Person operator+(Person &p)
*		{
*			Person temp;
*			temp.m_A = this->m_A + p.m_A;
*			temp.m_B = this->m_B + p.m_B;
*			return temp;
*		}
* 
*		int m_A;
*		int m_B;
*	}
* 
*	//ȫ�ֺ�������+��
*	Person operator+(Person &p1, Person &p2)
*	{
*		Person temp;
*		temp.m_A = p1.m_A + p2.m_A;
*		temp.m_B = p1.m_B + p2.m_B;
*		return temp;
*	}
* 
*	//��������� + ��������
*	Person operator+(Person &p1, int num)
*	{
*		Person temp;
*		temp.m_A = p1.m_A + num;
*		temp.m_B = p1.m_B + num;
*		return temp;
*	}
* 
*	//����
*	Person p3 = p1 + p2;
*	Person p4 = p1 + 100;
* 
* ������������أ�
*	��������Զ�����������
*	�������ó�Ա��������<<��������޷�ʵ��cout�����
* 
*	class Person
*	{
* 
*		friend ostream &operator<<(ostream &cout, Person &p);
* 
*	public:
*		Person(int a, int b)
*		{
*			m_A = a;
*			m_B = b;
*		}
* 
*	private:
*		int m_A;
*		int m_B;
*	}
* 
*	//ȫ�ֺ�������<<��
*	ostream &operator<<(ostream &cout, Person &p)
*	{
*		cout << p.m_A << m_B;
*		return cout;
*	}
* 
*	//����
*	Person p(10,10);
*	cout << p <<endl;
*	
* ������������أ�
*	ʵ���Լ�����������
* 
*	class MyInterger
*	{
* 
*		friend ostream& oprator<<(ostream& cout, MyInteger myint);
* 
*	public:
*	
*		MyInterger()
*		{
*			m_Num = 0;
*		}
* 
*		//����ǰ��++�����
*		MyInteger& operator++() //�������ã�һֱ��һ�����ݽ��е���������++(++myint)��
*		{
*			m_Num++;
*			return *this;
*		}
* 
* 
*		//���غ���++�����
*		MyInteger operator++(int) //intΪռλ������Ϊ����ǰ�õ����������������
*								  //����ֵ
*		{
*			MyInteger temp = *this;
*			m_Num++;
*			return temp;
*		}
* 
* 
*	private:
*		int m_Num;
*	}
* 
*	//�������������
*	ostream& oprator<<(ostream& cout, MyInteger myint)
*	{
*		cout << myint.m_Num;
*		return cout;
*	}
* 
*	//����
*	MyInteger myint;
*	cout << myint << endl;
*	cout << ++myint << endl;
*	cout << myint++ << endl;
* 
* ��ֵ��������أ�
*	Ĭ������£����ٸ�һ�������4��������
		Ĭ�Ϲ��캯��
		Ĭ����������
		Ĭ�Ͽ������캯��
		��ֵ�����operator=,�����Խ���ֵ������ǳ������
* 
*	class Person
*	{
*	public:
*	
*		Person (int age)
*		{
*			m_Age = new int(age);
*		}
* 
*		~Person()
*		{
*			if(m_Age != NULL)
*			{
*				delete m_Age;
				m_Age = NULL;
*			}
*		}
* 
*		//���ظ�ֵ�����
*		Person& operator=(Person &p)
*		{
*			//m_Age = p.m_Age; //���������Ĳ���
*			if(m_Age != NULL)
*			{
*				delete m_Age;
*				m_Age = NULL;
*			}
* 
*			m_Age = new int(*p.m_Age); //���
* 
*			return *this;
*		}
* 
*		int *m_Age;
*	}
* 
*	//����
*	Person p1(18);
*	Person p2(20);
*	Person p3(30);
*	p2 = p1; //��ֵ
*	p3 = p2 = p1;
* 
* ��ϵ��������أ�
* 
*	class Person
*	{
*	public:
*	
*		Person (string name, int age)
*		{
*			m_Name = name;
*			m_Age = age;
*		}
* 
*		//���ع�ϵ�����
*		bool operator==(Person &p)
*		{
*			if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
*			{
*				return true;
*			}
*			return false; 
*		}
* 
*		string m_Name;
*		int *m_Age;
*	}
* 
*	//����
*	Person p1("liruonan", 18);
*	Person p2("lixiaokou", 18);
*	if(p1 == p2)
*	{
*		cout << "���" << endl;
*	}
* 
* ����������������أ�
* 
*	�������������()Ҳ��������
*	���غ�ʹ�õķ�ʽ�뺯���������ƣ���˽����º���
*	�º���û�й̶�д�����Ƚ����
* 
*	class MyPrint
*	{
*	public:
*		void operator()(string text)
*		{
*			cout << text << endl;
*		}
*	}
* 
*	//����
*	MyPrint myPrint;
*	myPrint("Hello World!");
* 
*	//������������
*	cout << myAdd()(10, 20) << endl;
* 
* 
*/