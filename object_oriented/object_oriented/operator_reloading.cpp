/*
* 运算符重载
* 
* 对已有的运算符重新定义，以适应不同的数据类型
* 运算符重载支持函数重载
* 
* 加号运算符重载：
*	实现对象相加
* 
*	class Person
*	{
*	public:
*	
*		//成员函数：加号运算符重载
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
*	//全局函数重载+号
*	Person operator+(Person &p1, Person &p2)
*	{
*		Person temp;
*		temp.m_A = p1.m_A + p2.m_A;
*		temp.m_B = p1.m_B + p2.m_B;
*		return temp;
*	}
* 
*	//运算符重载 + 函数重载
*	Person operator+(Person &p1, int num)
*	{
*		Person temp;
*		temp.m_A = p1.m_A + num;
*		temp.m_B = p1.m_B + num;
*		return temp;
*	}
* 
*	//调用
*	Person p3 = p1 + p2;
*	Person p4 = p1 + 100;
* 
* 左移运算符重载：
*	可以输出自定义数据类型
*	不能利用成员函数重载<<运算符，无法实现cout在左侧
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
*	//全局函数重载<<号
*	ostream &operator<<(ostream &cout, Person &p)
*	{
*		cout << p.m_A << m_B;
*		return cout;
*	}
* 
*	//调用
*	Person p(10,10);
*	cout << p <<endl;
*	
* 递增运算符重载：
*	实现自己的整型数据
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
*		//重载前置++运算符
*		MyInteger& operator++() //返回引用，一直对一个数据进行递增操作（++(++myint)）
*		{
*			m_Num++;
*			return *this;
*		}
* 
* 
*		//重载后置++运算符
*		MyInteger operator++(int) //int为占位参数，为了与前置递增运算符重载区分
*								  //返回值
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
*	//重载左移运算符
*	ostream& oprator<<(ostream& cout, MyInteger myint)
*	{
*		cout << myint.m_Num;
*		return cout;
*	}
* 
*	//调用
*	MyInteger myint;
*	cout << myint << endl;
*	cout << ++myint << endl;
*	cout << myint++ << endl;
* 
* 赋值运算符重载：
*	默认情况下，至少给一个类添加4个函数：
		默认构造函数
		默认析构函数
		默认拷贝构造函数
		赋值运算符operator=,对属性进行值拷贝（浅拷贝）
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
*		//重载赋值运算符
*		Person& operator=(Person &p)
*		{
*			//m_Age = p.m_Age; //编译器做的操作
*			if(m_Age != NULL)
*			{
*				delete m_Age;
*				m_Age = NULL;
*			}
* 
*			m_Age = new int(*p.m_Age); //深拷贝
* 
*			return *this;
*		}
* 
*		int *m_Age;
*	}
* 
*	//调用
*	Person p1(18);
*	Person p2(20);
*	Person p3(30);
*	p2 = p1; //赋值
*	p3 = p2 = p1;
* 
* 关系运算符重载：
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
*		//重载关系运算符
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
*	//调用
*	Person p1("liruonan", 18);
*	Person p2("lixiaokou", 18);
*	if(p1 == p2)
*	{
*		cout << "相等" << endl;
*	}
* 
* 函数调用运算符重载：
* 
*	函数调用运算符()也可以重载
*	重载后使用的方式与函数调用类似，因此叫做仿函数
*	仿函数没有固定写法，比较灵活
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
*	//调用
*	MyPrint myPrint;
*	myPrint("Hello World!");
* 
*	//匿名函数对象
*	cout << myAdd()(10, 20) << endl;
* 
* 
*/