/*
* 对象特性
* 
* 构造函数与析构函数
*	
* 构造函数：
*	初始化对象
*	构造函数可以有参数，可以发生重载
*	class Person
*	{
*	public:
*		Person()
*		{
*			cout << "构造函数调用" << endl;
*		}
* 
*		~Person()
*		{
*			cout << "析构函数调用" << endl;
*		}
*	}
* 
* 析构函数：
*	进行释放与清理工作
*	不可以有参数，不可以重载
* 
* 构造函数的分类及调用：
*	按参数：
*		有参构造
*		无参构造
*	按类型：
*		普通构造
*		拷贝构造
* 
*	三种调用方法：
*		括号法
*		显式调用
*		隐式转换法
* 
*	class Person
*	{
*	public:
*		Person()
*		{
*			cout << "构造函数调用" << endl;
*		}
*		
*		//有参构造
*		Person(int a) 
*		{
*			cout << "构造函数调用" << endl;
*		}
* 
*		//拷贝构造函数（拷贝对象）
*		Person(const Person &p)
*		{
*			age = p.age;
*		}
* 
*		~Person()
*		{
*			cout << "析构函数调用" << endl;
*		}
*	}
* 
*	void test()
*	{
*		Person p2(10); //括号法调用构造函数
*		Person p3(p2); //括号法调用拷贝构造函数
* 
*		//显式调用
*		Person p2 = Person(10);
*		Person p3 = Person(p2);
* 
*		Person(10); //匿名对象
* 
*		//隐式转换法
*		Person p2 = 10;
*		Person p3 = p2;
*	}
*
* 拷贝构造函数的调用时机(什么时候拷贝构造函数会被调用)：
*	使用一个创建完毕的对象来初始化一个新的对象
*	以值传递的方式给函数传值
*	以值的方式返回局部对象
* 
*	void doWork(Person p)
*	{
* 
*	}
* 
*	void doWork2()
*	{
*		Person p1;
*		return p1;
*	}
* 
*	void test()
*	{
*		//使用一个创建完毕的对象来初始化一个新的对象
*		Person p2(p1);
* 
*		//以值传递的方式给函数传值
*		Person p;
*		doWork(p);
* 
*		//以值的方式返回局部对象
*		Person p = doWork2();
*	}
* 
* 构造函数调用规则：
*	默认情况下，会给一个类添加至少3个函数：默认构造函数、默认析构函数、默认拷贝构造函数
*	如果用户写了有参构造函数，不会再提供无参构造函数
* 
* 深拷贝与浅拷贝：
*	如果利用编译器提供的拷贝构造函数，会做浅拷贝
*	浅拷贝带来的问题：
*		堆区内存的重复释放
* 
*	深拷贝是自己实现，在深拷贝构造函数中在堆区再申请一块内存
* 
*	如果属性有在堆区开辟的，一定要自己实现深拷贝构造函数，防止浅拷贝带来的问题
* 
*	class Person
*	{
*	public:
*		Person()
*		{
*			cout << "构造函数调用" << endl;
*		}
*		
*		//有参构造
*		Person(int age, int height) 
*		{
*			m_age = age;
*			m_height = new int(height);
*			cout << "构造函数调用" << endl;
*		}
* 
*		//拷贝构造函数
*		Person(const Person &p)
*		{
*			cout << "拷贝构造函数调用" << endl;
*			m_age = p.m_age;
*			//m_height = p.m_height; //编译器实现的拷贝构造
*			m_height = new int (*p.m_height); //自己实现拷贝构造函数（实现深拷贝）
*		}
* 
*		~Person()
*		{
*			//释放堆区开放的空间
*			if(m_height != NULL)
*			{
*				delete m_height;
*				m_height = NULL;
*			}
*			cout << "析构函数调用" << endl;
*		}
* 
*		int m_age;
*		int *m_height;
*	}
* 
*	void test()
*	{
*		Person p1(18, 170);
*		Person p2(p1); //浅拷贝(如果利用编译器提供的拷贝构造函数，会做浅拷贝),逐字节拷贝
*	}
* 
* 初始化列表：
*	除了构造函数之外，c++提供了初始化列表语法，来初始化属性
*	
*	Person() :m_a(10),m_b(20),m_c(30)
*	{
* 
*	}
* 
*	Person(int a, int b, int c) :m_a(a),m_b(b),m_c(c) {}
* 
* 类对象作为类成员：
*	对象成员
* 
*	class B
*	{
*		A a;
*	}
* 
*	构造与析构的顺序：
*		类成员构造函数
*		类构造函数
*		类析构函数
*		类成员析构函数
* 
*	class Phone
*	{
*	public:
* 
*		Phone(string pName)
*		{
*			m_PName = pName;
*		}
* 
*		string m_PName;
*		
*	}
* 
*	class Person
*	{
*	public:
* 
*		Person(string name, string pName): m_Name(name), m_Phone(pName)
*		{
*			
*		}
* 
		string m_Name;
		Phone m_Phone;
*	}
* 
*	void test()
*	{
*		Person p("liruonan", "huawei");
*		
*	}
* 
* 静态成员：
*	静态成员就是在成员变量与成员函数之前加上static
*	静态成员不属于某个对象
* 
*	静态成员变量：
*		所有对象共享同一份数据
*		在编译阶段分配内存
*		类内声明，类外初始化
*	
*	静态成员函数：
*		所有对象共享同一个函数
*		静态成员函数只能访问静态成员变量（对于非静态成员变量，无法区分对象）
* 
*		class Person
*		{
*			static void func()
*			{
* 
*			}
* 
*			static int m_A; //类内声明
*		}
* 
*		int Person::m_A = 0; //类外初始化
* 
*		void test()
*		{
*			Person p;
*			p.func(); //通过对象调用
*			Person::func(); //通过类名调用
*		}
* 
* 成员变量与成员函数分开存储：
*	空对象占用内存空间为1字节，为了区分空对象占内存的位置
*	普通成员变量属于类的对象
*	静态成员变量不属于类的对象
*	普通成员函数不属于类的对象（只有一份，所有对象共享）
*	静态成员函数不属于类的对象
*	*每个对象只有自己独有的一份成员变量
* 
* this指针：
*	this指针指向被调用的成员函数所属对象
*	this指针在每个成员函数中隐含
* 
*	this指针的本质时是指针常量，指针的指向不可修改
* 
*	用途：
*		形参与成员变量名同名时，可用this指针来区分
*		在类的成员函数中，若要返回对象本身，可以使用return *this
* 
*	Person(int age)
*	{
*		this->age = age;
*	}
* 
*	Person & func()
*	{
*		...
*		return *this;
*	}
* 
* 空指针访问成员函数：
*	成员函数默认有this指针，但空指针没有指向确定对象
* 
*	Person *p = NULL;
*	p -> showAge(); //会报错
* 
*	//提高健壮性
*	if(this == NULL)
*	{
*		return;
*	}
* 
* const修饰成员函数：
*	const修饰的成员函数 —— 常函数
*	常函数内不可修改成员属性
*	成员属性声明加关键字mutable后，在常函数中就可以修改
* 
*	const修饰的对象——常对象
*	常对象只能访问常函数与加mutable关键字的成员属性
* 
*	void showPerson() const
*	{
*		m_A = 100; //此处不可修改
*	}
* 
*	mutable int m_B;
* 
* 
* 
* 
* 
* 
*/	