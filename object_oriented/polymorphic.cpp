/*
* 多态
* 
* 静态多态：函数重载、运算符重载
* 动态多态：派生类与虚函数实现运行时多态（传入对象不同，执行不同的操作）
* *一般多态指动态多态
* 
* 静态多态的函数地址早绑定——编译阶段确定函数地址
* 动态多态的函数地址晚绑定——运行阶段确定函数地址
* 

* 动态多态需满足的条件：
*	有继承关系
*	子类重写父类的虚函数（重写：函数返回值类型、函数名、参数列表完全相同）
* 
* 动态多态调用：
*	父类的指针或引用指向子类对象
*	Animal * animal = Cat;
* 
* class Animal 
* {
* public:
*	virtual void speak() //虚函数；父类函数，如果不加virtual，那么地址早绑定，此时无论speak中传cat还是dog，都会输出“动物在说话”
*	{	
*		cout << "动物在说话" << endl;
*	}
* };
* 
* class Cat: public Animal
* {
*	void speak()
*	{
*		cout << "小猫在说话" << endl;
*	}
* };
* 
* void doSpeak(Aniaml &animal)
* {
*	animal.speak();
* }
* 
* Cat cat;
* doSpeak(cat);
* 
* 多态的原理：
*	加上类之后，（空）类的大小变为4个字节，包含了一个指针（vfptr）
*	vfptr:
*		虚函数表指针
*		vfptr -> vftable(表内部记录虚函数的地址)
*		&Animal::speak
* 
*	子类：
*		继承了父类的vfptr指针，指向自己的虚函数表
*		子类重写了父类虚函数，子类中的虚函数表内部会替换成子类的虚函数地址
*		当父类的引用或指针指向子类对象时，去找子类的虚函数表，就发生了多态
* 
* 纯虚函数与抽象类：
*	多态中，父类虚函数的实现没有意义，一般调子类重写的内容
*	因此可以将虚函数改为纯虚函数
*	
*	语法：
*		virtual 返回值类型 函数名 (参数列表) = 0;
* 
*	当类中有了纯虚函数，这个类也成为抽象类
*	
*	抽象类的特点：
*		无法实例化对象
*		子类必须重写抽象类中的纯虚函数，否则也属于抽象类，无法实例化对象
* 
*虚析构与纯虚析构：
*		多态使用时，如果子类被开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
* 
*		解决方式：将父类的析构函数改为虚析构或纯虚析构
* 
*		virtual ~Animal() //父类指针释放子类对象
*		{
*			cout << "析构函数" << endl;
*		}
* 
*		virtual ~Animal() = 0; //纯虚析构
* 
*		Animal::~Animal() //纯虚析构的实现；纯虚析构若不实现，父类调用析构函数时会报连接错误
*		{
*			cout << "纯虚析构" << endl;
*		}

       示例代码：
           class Base
           {
           public:
               virtual void move()
               {
                   cout << "Base move" << endl;
               }
               //virtual void move() = 0;

               virtual ~Base()
               {
                   cout << "Base析构调用"<< endl;
               }
           };

* 
*		   class Cat: public Base
           {
           public:
           Cat(){}

           Cat(int age)
		   {
			   this->age = new int(age);
		   }

			void move()
			{
				cout << "Cat move" << endl;
			}

			~Cat()
			{
				cout << "cat析构调用" << endl;
			}

			int *age;
		};
* 
*        Base *base = new Cat;
         base -> move();
         delete base;
* 
* 
* 
* 
*/
