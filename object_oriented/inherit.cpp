/*
* 继承
* 
*	减少重复代码
* 
*	class 子类：继承方式 父类
*	基类、派生类
* 
* class Java: public BasePage
* {
* 
* };
* 
* 继承方式：
*	公共继承
*	保护继承：父类public变为protected
*	私有继承: 父类public、protected变为private
* 
*	*父类中的私有内容子类不能访问，不管哪种继承方式
*	
* 继承中的对象模型（继承关系）：
*	父类中的非静态成员都会被子类继承（包括私有）
* 
*	vs开发人员工具：
		cl /d1 reportSingleClassLayoutSon inherit.cpp
* 
* 继承中的构造与析构函数：
*	调用顺序：
*		Base构造
*		Son构造
*		Son析构
*		Base析构
* 
* 继承中同名成员处理方式：
*	父类与子类重名
*	访问子类同名成员：直接访问
*	访问父类同名成员：需要加作用域
*		s.Base::m_A
*		s.Base::func();
* 
* 继承中同名静态成员处理方式：
*	访问子类同名成员：直接访问
*	访问父类同名成员：需要加作用域
*		Son::Base::m_A; //通过类名访问
*		Son::Base::func();
* 
* 多继承语法（C++开发中不建议使用多继承）：
*	class 子类:继承方式 父类1, 继承方式 父类2, ...
*	
*	class Son :public Base1, public Base2
*	{

*	};
* 
*	多继承中的重名问题，需要加作用域
* 
* 菱形继承（钻石继承）：
*	二义性：两个父类拥有相同的数据，需要加作用域加以区分
    危害：
        命名冲突：孙子类调用爷爷类的成员变量，但爸爸类与叔叔类都继承了爷爷类的该成员变量，因此孙子类继承了两份数据，调用时编译器无法正确区分到底是爸爸类还是叔叔类
        内存冗余
*	孙子继承了两份来自爷爷的数据：利用虚继承来解决
        class Base()
        {}

        class Dog: virtual public Base
        {}

        class Cat: virtual public Base
        {}

*		class DogCat: public Dog, public Cat
        {}

        虚基类(Base):
*		虚基类使数据变为一份
*		vbptr:虚基类指针，指向vbtable(虚基类表)
* 
* 
* 
* 
* 
* 
* 
* 
*/
